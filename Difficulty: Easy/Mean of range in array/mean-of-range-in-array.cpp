class Solution {
  public:
    using ll = long long;
    
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
       
       int n = arr.size();
       
       int m = queries.size();
       
       vector<int>ans(m);
       
       vector<int>pf(n,0);
       
       pf[0] = arr[0];
       
       for(int i=1;i<n;i++){
           pf[i] = pf[i-1] + arr[i];
       }
       
       
       for(int i=0;i<m;i++){
           
           int l = queries[i][1];
           int r = queries[i][0];
           
           ans[i] = (pf[l] - pf[r-1])/(l-r+1);
       }
       
       
       return ans;
       
       
    } 
};