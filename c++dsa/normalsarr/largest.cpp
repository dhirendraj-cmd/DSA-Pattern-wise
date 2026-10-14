#include <iostream>
#include <vector>

using namespace std;


class Solution{
    public:
        void largest(){
            vector<int> arr = {3,1,6,13,9};
            int lg = INT_MIN;

            for(int i=0; i<arr.size(); i++){
                if(arr[i] > lg){
                    lg=arr[i];
                }
            }

            cout<<lg<<"\n";
        }

};


int main(){
    Solution sol;
    sol.largest();
}

