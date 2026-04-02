class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        
        int n = mat.size();
        
        vector<vector<int>>v(2*n-1);
        
        
        for(int i=0;i<n;i++){
            
            
             for(int j=0;j<n;j++){
                 
                 v[i+j].push_back(mat[i][j]);
             }
        }
        
        
        vector<int>ans;
        
        int x = mat.size();
        
        
        for(int i=0;i<(2*n-1);i++){
            
            for(int ele:v[i]){
                
                ans.push_back(ele);
            }
        }
        
        return ans;
        
    }
};