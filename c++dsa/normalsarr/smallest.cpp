#include <iostream>
#include <vector>

using namespace std;


class Solution{
    public:
        void smallest(){
            vector<int> arr = {34,100,6,31,2};
            int sm = INT_MAX;

            for(int i=0; i<arr.size(); i++){
                if(arr[i] < sm){
                    sm=arr[i];
                }
            }

            cout<<sm<<"\n";
        }

};


int main(){
    Solution sol;
    sol.smallest();


}

