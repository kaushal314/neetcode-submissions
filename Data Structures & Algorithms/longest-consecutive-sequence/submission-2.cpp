class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int curr=nums[0],streak=0,res=0,i=0;
        while(i<nums.size()){
            if(curr!=nums[i]){
                streak=0;
                curr=nums[i];
            }
            while(i<nums.size() && nums[i]==curr) i++;
            streak++;
            curr++;
            res=max(res,streak);
        }
        return res;
    }
};
