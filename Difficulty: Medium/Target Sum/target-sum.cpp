class Solution {
public:
    using ll = long long;

    int f(int idx, int target, int sum, vector<int>& arr, int n, int& result,vector<vector<int>>&dp) {
        
        if(sum==target && idx==n){
            return 1;
        }
        
        if(idx>=n){
            return 0;
        }
        
        if(dp[idx][sum+5000]!=-1){
            return dp[idx][sum+5000];
        }

        dp[idx][sum+5000]=f(idx + 1, target, sum + arr[idx], arr, n, result,dp) +f(idx + 1, target, sum - arr[idx], arr, n, result,dp);
        
        return dp[idx][sum+5000];
    }

    int totalWays(vector<int>& arr, int target) {
        // int result = 0;
        int n = arr.size();
        
        vector<vector<int>>dp(n+1,vector<int>(10001,-1));
        
        int result = f(0, target, 0, arr, n, result,dp);
        return result;
    }
};