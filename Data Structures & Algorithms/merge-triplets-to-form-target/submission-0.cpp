class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool found0 = false, found1 = false, found2 = false;

        for (const auto& triplet : triplets) {
            // Skip if triplet has any value greater than target
            if (triplet[0] > target[0] || triplet[1] > target[1] || triplet[2] > target[2])
                continue;

            // Check if it helps match any part of the target
            if (triplet[0] == target[0]) found0 = true;
            if (triplet[1] == target[1]) found1 = true;
            if (triplet[2] == target[2]) found2 = true;
        }

        // All 3 positions must be matched
        return found0 && found1 && found2;
    }
};
