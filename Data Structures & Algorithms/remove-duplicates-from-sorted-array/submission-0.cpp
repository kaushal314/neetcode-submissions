class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int>a;
        for(auto b:nums){
            a.insert(b);
        }
        nums.clear();
        for(auto n:a){
            nums.push_back(n);
        }
        sort(nums.begin(),nums.end());
        return nums.size();

    }
};