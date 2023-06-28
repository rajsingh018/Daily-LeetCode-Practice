class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double wait = 0, cur = 0;
        for (auto x: c) {
            cur = max(cur, 1.0 * x[0]) + x[1];
            wait = wait + cur - x[0];
        }
        double res = wait/c.size();
        return res;
    }
};