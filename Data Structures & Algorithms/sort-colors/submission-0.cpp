class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>a(3);
        for(auto b:nums){
            a[b]++;
        }
        int in=0;
        for(int i=0;i<3;i++){
            while(a[i]-->0){
                nums[in++]=i;
            }
        }
    }
};