class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>a;
        int n=nums.size();
        for(auto b:nums){
            a[b]++;
        }
        vector<int>c;
        for(auto b:a){
            if(b.second>n/3){
                c.push_back(b.first);
            }
        }
        return c;
    }
};