class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
         if (hand.size() % groupSize != 0) return false;
        int n=hand.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(m[hand[i]]==0){
                m[hand[i]]=1;
            }
            else{
                m[hand[i]]++;
            }
        }
        sort(hand.begin(),hand.end());
        for(int nu:hand){
            if(m[nu]>0){
                for(int j=nu;j<nu+groupSize;j++){
                    if(m[j]==0) return false;
                    m[j]--;
                }
            }
        }
        return true;
    }
};
