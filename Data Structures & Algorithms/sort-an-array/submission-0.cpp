class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int>a;
        for(auto b:nums){
            a[b]++;
        }
        vector<int>c;
        for(auto &[key,f]:a){
            while(f--){
                c.push_back(key);
            }
        }
        return c;
    }
};