class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
        // two pointer method!!!!
        
        int n = arr.size();
        
        int i=0;
        int j=n-1;
        
        while(i<=j){
            
            if(arr[i]==0 && arr[j]==0){
                i++;
            }else if(arr[i]==1 && arr[j]==0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }else if(arr[i]==0 && arr[j]==1){
                i++;
                j--;
            }else if(arr[i]==1 && arr[j]==1){
                j--;
            }
        }
        
        return;
    }
};