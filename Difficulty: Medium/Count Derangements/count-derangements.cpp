class Solution {
  public:
    using ll = long long;
    
    
    bool check(vector<int>&arr){
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==i+1){
                return false;
            }
        }
        
        return true;
    }
    
    int derangeCount(int n) {
        
        ll mx = 0;
        
        vector<int>dp(n+1,0);

        dp[1]=0;
        dp[2] =1;
        
        
        for(int i=3;i<=n;i++){
            dp[i] = (i-1)*(dp[i-1]+dp[i-2]);
        }
        
        return dp[n];
        
    }
};