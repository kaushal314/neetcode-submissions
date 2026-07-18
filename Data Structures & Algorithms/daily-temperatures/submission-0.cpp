class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>a(n,0);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]){
                    a[i]=j-i;
                    break;
                }
            }
        }
        return a;
    }
};
