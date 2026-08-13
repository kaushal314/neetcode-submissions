class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>a;
        for(int i=0;i<numbers.size();i++){
            int t=target-numbers[i];
            if(a.count(t)){
                return {a[t]+1,i+1};
            }
            a[numbers[i]]=i;
        }
        return {};
    }
};
