class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        
        vector<int>pf(arr.size(),0);
        
        pf[0] = arr[0];
        
        long long s = accumulate(arr.begin(),arr.end(),0LL);
        
        if(s%2){
            return false;
        }
        
        int tg = s/2;
        
        for(int i=1;i<n;i++){
            pf[i] = pf[i-1] + arr[i];
        }
        
        for(int i=0;i<n;i++){
            int rm = s - pf[i];
            if(rm==tg){
                return true;
            }
        }
        
        return false;
    }
};
