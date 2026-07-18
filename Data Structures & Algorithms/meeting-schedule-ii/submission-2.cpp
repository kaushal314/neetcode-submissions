/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> starts, ends;
        for (auto b : intervals) {
            starts.push_back(b.start);
            ends.push_back(b.end);
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int rooms = 0;
        int endPtr = 0;

        for (int i = 0; i < starts.size(); i++) {
            if (starts[i] < ends[endPtr]) {
                // Need a new room
                rooms++;
            } else {
                // One meeting ended, reuse room
                endPtr++;
            }
        }
        return rooms;
    }
};
