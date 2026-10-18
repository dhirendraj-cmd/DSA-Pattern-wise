// previous greater element

#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> res(n, 0);
        stack<int> st;
        
        for(int i=0; i<n; i++){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            
            if(st.empty()){
                res[i]=-1;
            } else{
                res[i] = st.top();
            }
            
            st.push(arr[i]);
        }
        
        return res;
    }
};


int main(){
    Solution sol;
    vector<int> arr = {10, 4, 2, 20, 40, 12, 30};
    vector<int> ans;
    ans = sol.preGreaterEle(arr);

}