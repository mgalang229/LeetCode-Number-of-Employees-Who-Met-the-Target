class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        for (int& h : hours) {
            cnt += (h >= target);
        }
        return cnt;
    }
};
