class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>a;
        for(auto b:nums){
            a[b]++;
        }
        priority_queue<pair<int,int>>d;
        for(auto b:a){
            d.push({b.second,b.first});
        }
        vector<int>c;
        for(int i=0;i<k;i++){
            c.push_back(d.top().second);
            d.pop();
        }
        return c;
    }
};
