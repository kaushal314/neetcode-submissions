class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>a;
        int n=nums.size();
        for(auto b:nums){
            a[b]++;
        }
        for(auto b:a){
            if(b.second>n/2){
                return b.first;
            }
        }
    }
};