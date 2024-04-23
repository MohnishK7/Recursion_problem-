class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        dp[0] = 1;
        dp[1] = 1;
  
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        
        return dp[n];
    }
};
/*******************************************************************/
class Solution {
    int f(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;

        return f(n - 1) + f(n - 2);
    }

    public int climbStairs(int n) {
        return f(n);
    }
}
