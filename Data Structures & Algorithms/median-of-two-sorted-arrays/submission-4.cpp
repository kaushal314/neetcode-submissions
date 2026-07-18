class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int>m;
        for(int i=0;i<nums1.size();i++){
            m.push_back(nums1[i]);
        }
          for(int i=0;i<nums2.size();i++){
            m.push_back(nums2[i]);
        }
        sort(m.begin(),m.end());
        int n=m.size();
          if (n % 2 == 0) {
            return (m[n / 2 - 1] + m[n / 2]) / 2.0;
        } else {
            return m[n / 2];
        }
    }
};
