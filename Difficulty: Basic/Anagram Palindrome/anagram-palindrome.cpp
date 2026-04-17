class Solution {
  public:
    bool canFormPalindrome(string &s) {
        
        int n = s.size();
        
        unordered_map<int,int>freq;
        
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        
        if(n%2){
            
            bool s1 = false;
            
            
            for(auto f:freq){
                if(f.second%2){
                    if(!s1){
                    s1=true;
                    }else{
                        return false;
                    }
                }
            }
        }else{
            
            for(auto f:freq){
                if(f.second%2){
                    return false;
                }
            }
        }
        
        return true;
    }
};