class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            if(m[nums[i]] == 0) {
                m[nums[i]] = 1;
            }
            else {
                m[nums[i]]++;
            }
        }

        priority_queue<pair<int, int>> pq;
        for(auto x : m) {
            pq.push({x.second, x.first});
        }

        vector<int> a;
        for(int i = 0; i < k; i++) {
            a.push_back(pq.top().second);
            pq.pop();
        }

        return a;
    }
};
