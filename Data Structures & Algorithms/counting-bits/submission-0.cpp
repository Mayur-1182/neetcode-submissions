class Solution {
   public:
    int getBits(int n) {
        int ans = 0;
        while (n > 1) {
            if (n & 1 == 1) {
                ans += 1;
            }
            n=n >> 1;
        }
        if (n & 1 == 1) {
            ans += 1;
        }
        return ans;
    }
    vector<int> countBits(int n) {
        vector<int> result = {};
        for (int i = 0; i <= n; i++) {
            result.push_back(getBits(i));
        }
        return result;
    }
};
