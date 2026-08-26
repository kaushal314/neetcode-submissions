class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> a;
        priority_queue<pair<int,vector<int>>>b;
        for(auto& p:points){
            int x=p[0],y=p[1];
            int d=x*x+y*y;
            b.push({d,p});
            if(b.size()>k){
                b.pop();
            }
        }
        while(!b.empty()){
            a.push_back(b.top().second);
            b.pop();
        }
        return a;
    }
};
