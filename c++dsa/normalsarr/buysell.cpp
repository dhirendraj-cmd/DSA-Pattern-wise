#include <iostream>
#include <vector>

using namespace std;


class Solution{
    public:
        void buynsell(){
            vector<int> arr = {7,1,5,3,6,4};
            int mxp=0;
            int mnp=arr[0];

            for (int i = 1; i <= arr.size(); i++)
            {
                int diff;
                if (mnp>arr[i]) mnp=arr[i];

                diff = arr[i] - mnp;
                if (diff>mxp) mxp=diff;
                
            }

            cout << "MAX: " << mxp << endl;
            
            
        }

};


int main(){
    Solution sol;
    sol.buynsell();
}

