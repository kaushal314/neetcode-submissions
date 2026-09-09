class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>c;
        for(int i=0;i<=n;i++){
            int t=0;
            int x=i;
            while(x>0){
                int a=x%2;
                if(a==1){
                    t++;
                }
                x=x/2;
            }
            c.push_back(t);
        }
        return c;
    }
};
