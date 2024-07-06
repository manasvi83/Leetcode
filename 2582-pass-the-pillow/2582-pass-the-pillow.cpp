class Solution {
public:
    int passThePillow(int n, int time) {
        int done = time / (n-1);
        int left = time % (n-1);
        int ans = 0;
        if (done % 2 != 0) {
            ans = n - left;
        } else {
            ans = left + 1;
        }
        return ans;
    }
};