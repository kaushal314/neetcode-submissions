class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>a;
        for(int b:nums){
            if(a.count(b)){
                return true;
            }
            a.insert(b);
        }
       return false;
    }
};