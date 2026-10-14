// First Negative in Windows of Size K
// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1


#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution{
    public:
        void firstNegInt(vector<int>& arr, int k){
            int n=arr.size();
            vector<int> res;
            queue<int> hold;
            int i=0, j=0;

            while(j<n){
                if(arr[j]<0){
                    hold.push(arr[j]);
                }
                if(j-i+1<k){
                    j++;
                } else if(j-i+1==k){
                    if(hold.empty()){
                        res.push_back(0);
                    } else {
                        res.push_back(hold.front());
                        }
                    if(!hold.empty() && arr[i] == hold.front()){
                            hold.pop();
                    }
                    i++;
                    j++;

                    }
                }

            for(int x=0; x<res.size(); x++){
                cout << res[x] << ",";
            }
            
            cout<<endl;

        }

};

int main(){
    Solution sol;
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k=2;

    sol.firstNegInt(arr, k);
    
}
