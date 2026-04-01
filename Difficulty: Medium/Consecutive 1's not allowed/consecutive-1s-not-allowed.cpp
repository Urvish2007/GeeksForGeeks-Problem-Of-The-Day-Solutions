class Solution {
  public:
    int countStrings(int n) {
        // code here
        
        int pz = 1;
        int po=1;
        
        for(int i=2;i<=n;i++){
            int z = pz+po;
            int o = pz;
            
            pz=z;
            po=o;
        }
        
        return pz+po;
    }
};