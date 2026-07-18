class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>t(n,0);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(temp[i]<temp[j]){
                    t[i]=j-i;
                    break;
                }
            }
        }
        return t;
    }
};
