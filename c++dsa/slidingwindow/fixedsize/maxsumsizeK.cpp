// Max Sum Subarray of size K
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:
        int maxSubarraySum(vector<int>& arr, int k){
            int n=arr.size();
            if(n<k) return 0;

            int mx = INT_MIN;
            int cs = 0;
            // int i=0, j=1;

            // mtd1 best
            // while(j<n){
            //     cs += arr[j];
            //     if (j-i+1<k){
            //         j++;
            //     } else if(j-i+1==k){
            //         mx=max(cs, mx);
            //         cs-=arr[i];
            //         i++;
            //         j++;
            //     }
            // }

            // mtd2
            // calculate sum of first window
            for(int i=0; i<k; i++){
                cs+=arr[i];
            }

            mx = max(cs, mx);

            // slide window and check mtd2
            for(int i=k; i<n; i++){
                cs += arr[i]-arr[i-k];
                mx=max(cs, mx);
            }
            

            return mx;

        }

};


int main(){
    Solution sol;
    vector<int> arr = {100, 200, 300, 400};
    int k=1;

    int mxsum = sol.maxSubarraySum(arr, k);
    cout << "max sum is: "<< mxsum << endl;
}


// 9332-0574