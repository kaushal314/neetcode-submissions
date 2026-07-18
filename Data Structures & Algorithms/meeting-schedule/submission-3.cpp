/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * };
 */

class Solution {
public:
    static bool compare(pair<int, int> a, pair<int, int> b) {
        return a.first < b.first;
    }

    bool canAttendMeetings(vector<Interval>& intervals) {
         if (intervals.size() <= 1) {
        return true; 
    }
        vector<pair<int, int>> a;
        for (auto b : intervals) {
            a.push_back(make_pair(b.start, b.end));
        }
        sort(a.begin(), a.end(), compare);
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i].second > a[i + 1].first) {
                return false;
            }
        }
        return true;
    }
};
