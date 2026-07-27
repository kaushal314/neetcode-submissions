class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>a(stones.begin(),stones.end());
        while(a.size()>1){
            int b=a.top();
            a.pop();
            int c=a.top();
            a.pop();
            int d=b-c;
            if(d>0) a.push(d);
        }
        return a.empty()? 0:a.top();
    }
};
