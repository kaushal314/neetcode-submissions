class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        int n=strs.size();
        for(int i=1;i<n;i++){
            int j=0;
            while(j<min(a.length(),strs[i].length())){
                if(a[j]!=strs[i][j]){
                    break;
                }
                j++;
            }
            a=a.substr(0,j);
        }
        return a;
    }
};