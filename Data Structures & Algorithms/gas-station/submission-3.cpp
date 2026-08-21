class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tg=0,tc=0;
        int c=0;
        int a=0;
        for(int i=0;i<n;i++){
            tg+=gas[i];
            tc+=cost[i];
            c+=(gas[i]-cost[i]);
            if(c<0){
                a=i+1;
                c=0;
            }
        }
        return tg<tc?-1:a;
    }
};
