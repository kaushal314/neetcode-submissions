class Solution {
public:
    int se(vector<int>& nums,int s,int e, int t){
        if(s>e){
            return -1;
        }
        int m=s+(e-s)/2;
        if(nums[m]==t){
            return m;
        }
        else if(nums[m]>t){
            return se(nums,s,m-1,t);
        }
        else{
            return se(nums,m+1,e,t);
        }
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return se(nums,0,n-1,target);
    }
};
