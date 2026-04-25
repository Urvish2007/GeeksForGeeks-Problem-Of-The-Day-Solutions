class Solution {
public:
    vector<int> reducePairs(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;

        for(int i = 0; i < n; i++) {
            int curr = arr[i];
            bool f = false;

            while(!st.empty()) {
                int x = st.top();
                int x1 = abs(x);
                int y1 = abs(curr);
                
                if((curr<0 && x<0) || (curr>0 && x>0)){
                    break;
                }
            
                if((curr<0 && x>0) || (curr>0 && x<0)){
                if(x1 == y1) {
                    st.pop();
                    f=true;
                    break;
                }
                else if(x1 > y1) {
                    f=true;
                    break;
                }
                else {
                    st.pop(); 
                }
                }
            }

            if(!f) {
                st.push(curr);
            }
        }

        vector<int> ans(st.size());
        for(int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};