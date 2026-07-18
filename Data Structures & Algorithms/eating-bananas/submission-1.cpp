class Solution {
public:
    long long fun(vector<int>& piles, int speed) {
        long long t = 0;

        for (int i = 0; i < piles.size(); i++) {
            t += (piles[i] + speed - 1) / speed;
        }

        return t;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        int ans = r;

        while (l <= r) {

            int mid = l + (r - l) / 2;

            long long hours = fun(piles, mid);

            if (hours <= h) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};