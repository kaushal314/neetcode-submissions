class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int s=0;
        int tg=0,tc=0,c=0;
        for(int i=0;i<n;i++){
            tg+=gas[i];
            tc+=cost[i];
            c+=(gas[i]-cost[i]);
            if(c<0){
                s=i+1;
                c=0;
            }
        }
        return tg<tc?-1:s;
    }
};
