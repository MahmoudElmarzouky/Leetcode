class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 0, h = 1LL * minTime(time) * totalTrips;
        long long res = 0;
        while (l <= h) {
            long long mid = (l+h)/ 2;

            if (numOfTrips(mid, time) >= totalTrips) {
                res = mid;
                h = mid - 1;
            }
            else
                l = mid + 1;
        }
        return res;
    }

    long long numOfTrips(long long cur, vector<int>& time) {
        long long counter = 0;
        for (int t : time)
            counter += cur / t;
        
        return counter;
    }

    long long minTime(vector<int>& time) {
        return *min_element(time.begin(), time.end());
    }
};