class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,c=nums[0],s=0,ans=0;
        while(i<n){
            if(nums[i]!=c){
                c=nums[i];
                s=0;
            }
            while(i<n && c==nums[i]){
                i++;
            }
            c++;
            s++;
            ans=max(ans,s);
        }
        return ans;
    }
};
