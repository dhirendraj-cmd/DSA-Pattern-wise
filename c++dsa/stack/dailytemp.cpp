// 739. Daily Temperatures

#include <iostream>
#include <vector>
#include <stack>
#include <utility>

using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        int days;
        stack<pair<int, int>> st;
        vector<int> res(n, 0);
        st.push({temperatures[n-1], n-1});

        for(int i=n-2; i>=0; i--){
            while (!st.empty() && st.top().first  <= temperatures[i])
            {
                st.pop();
            }

            if(st.empty()){
                res[i] = 0;
            } else{
                days = st.top().second - i;
                res[i]= days;
            }

            st.push({temperatures[i], i});
            
        }

        return res;
    }
};

int main(){
    Solution sol;
    vector<int> temp = {30,60,90, 21};
    vector<int> ans;
    ans = sol.dailyTemperatures(temp);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;
}

