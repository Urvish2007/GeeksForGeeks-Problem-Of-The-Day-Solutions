class Solution {
  public:
    string URLify(string &s) {
        // code here
        
        int n = s.size();
        
        string ans="";
        
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                ans+=s[i];
            }else{
                ans+="%20";
            }
        }
        
        return ans;
    }
};