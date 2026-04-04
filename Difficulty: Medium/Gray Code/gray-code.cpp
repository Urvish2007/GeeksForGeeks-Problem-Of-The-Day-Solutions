
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> graycode(int n) {
        // code here
        
        // need to generate grey code
        
        // in gray code msb remain same but lsb become xor
        
        vector<string>gc(1<<n);
        
        // okay so first i need binary string for that particular number
        // 2. convert to grey string
        // 3. append it!!!!
        
        for(int i=0;i<gc.size();i++){
            
            int x = i;
            
            bitset<16>b(x);
            
            string b1 = b.to_string().substr(16-n);
            
            string g ="";
            
            g+= b1[0];
            
            for(int i=1;i<n;i++){
                
                int xc = b1[i] -'0';
                int xp = b1[i-1] -'0';
                
                int f = xc^xp;
                
                g+= (f+'0');
            }
            
            gc[i] = g;
        }
        
        
        return gc;
    }
};