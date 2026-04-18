class Solution {
  public:
    using ll = long long;
    
    int maxOnes(vector<int>& arr) {
        
        int n = arr.size();
        
        // count no-of-ones-in-array
        
        int x = count(arr.begin(),arr.end(),1);
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                arr[i]=-1;
            }else{
                arr[i]=1;
            }
        }
        
        ll mx=0;
        
        ll s=0;
        
        for(auto x:arr){
            s+=x;
            mx=max(mx,s);
            if(s<0){
                s=0;
            }
        }
        
        return mx+x;
    }
};