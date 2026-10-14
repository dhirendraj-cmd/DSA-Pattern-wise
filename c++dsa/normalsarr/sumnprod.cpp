#include <iostream>
#include <vector>

using namespace std;


class Solution{
    public:
        int sumn(vector<int> arr){
            int s=0;
            for(int i=0; i<arr.size(); i++){
                s+=arr[i];
            }

            return s;
        }

        int prod(vector<int> arr){
            int p=1;
            for(int i=0; i<arr.size(); i++){
                p*=arr[i];
            }

            return p;
        }

};


int main(){
    Solution sol;
    vector<int> arr = {2,7,5,1,9,5,4};
    cout << sol.sumn(arr) << endl;
    cout << sol.prod(arr) << endl;


}