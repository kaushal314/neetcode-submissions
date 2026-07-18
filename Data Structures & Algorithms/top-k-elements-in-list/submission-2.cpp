class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        for(auto x:nums){
            a[x]++;
        }
        priority_queue<pair<int,int>>b;
        for(auto x:a){
            b.push({x.second,x.first});
        }
        vector<int>c;
        for(int i=0;i<k;i++){
            c.push_back(b.top().second);
            b.pop();
        }
        return c;
    }
};
