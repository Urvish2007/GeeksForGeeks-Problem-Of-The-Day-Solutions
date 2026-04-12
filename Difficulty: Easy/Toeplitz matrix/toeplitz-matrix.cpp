class Solution {
  public:
    using ll = long long;
    
    bool isToeplitz(vector<vector<int>>& mat) {
        // code here
        
        
        // need to check only left diagonal element
        
        // need to check each and every diagonal
        
        int n = mat.size();
        int m = mat[0].size();
        
        bool f = true;
        
        for(int i=1;i<n;i++){
            
            for(int j=1;j<m;j++){
                
                if(mat[i][j]!=mat[i-1][j-1]){
                    return false;
                }
            }
        }
        
        return true;
    }
};