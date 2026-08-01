class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size())
            return -1;

        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());

        while (start <= end) {
            int mid = start + (end - start) / 2;

            int flowers = 0;
            int bouquets = 0;
            int i = 0;
            while (i < bloomDay.size()) {
                if (bloomDay[i] <= mid) {
                    flowers++;

                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                } else {
                    flowers = 0;
                }
                i++;
            }
            if (bouquets >= m)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return start;
    }
};