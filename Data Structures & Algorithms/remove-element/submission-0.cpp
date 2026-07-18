class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>a;
        for(int x:nums){
            if(x!=val){
                a.push_back(x);
            }
        }
        for (int i=0;i<a.size();i++) {
            nums[i]=a[i];
        }
        return a.size();
    }
};