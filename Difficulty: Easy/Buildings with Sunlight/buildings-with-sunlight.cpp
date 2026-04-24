class Solution {
  public:
    using ll = long long;
    
    int visibleBuildings(vector<int>& arr) {
        // code here
        
        ll mx = LLONG_MIN;
        
        int cnt=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=mx){
                mx=arr[i];
                cnt++;
            }
        }
        
        return cnt;
    }
};