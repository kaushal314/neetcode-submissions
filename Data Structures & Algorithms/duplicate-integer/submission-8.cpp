class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        for(int n:nums){
            if(a.find(n)!=a.end())return true;
            a.insert(n);
        }
        return false;
    }
};