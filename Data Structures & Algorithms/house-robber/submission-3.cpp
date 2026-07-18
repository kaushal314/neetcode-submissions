class Solution {
public:
    int dpo(int n,vector<int>& nums,vector<int> &a){
        if(n == 0) return nums[n];
        if(n < 0) return 0;
        if(a[n] != -1) return a[n];
        int pick = nums[n] + dpo(n-2, nums, a);
        int notpick = 0 + dpo(n-1, nums, a);
        return a[n] = max(pick, notpick); 
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> a(n,-1);
        return dpo(n-1,nums,a);
    

    }
};