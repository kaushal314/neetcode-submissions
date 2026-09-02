class Solution {
public:
    int maxArea(vector<int>& heights) {
        int e=heights.size()-1,l=0;
        int a=0;
        while(l<e){
            a=max(a,min(heights[e],heights[l])*(e-l));
            if(heights[l]<heights[e])l++;
            else e--;
            
        }
        return a;
        
    }
};
