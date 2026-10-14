#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


class Solution{
    public:
        int uniq(vector<int> arr){
            unordered_set<int> st;

            for (int i = 0; i < arr.size(); i++)
            {
                if(st.find(arr[i]) != st.end()){

                }
            }
            
        }

    
};


int main(){
    Solution sol;
    vector<int> arr = {1,2,3,1,2,3,4,5};
    int uniqVal = sol.uniq(arr);


}