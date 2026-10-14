// Triplets with Smaller Sum
// https://www.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int countTriplets(int sum, vector<int>& arr) {
            int n=arr.size();
            int ans=0;

            sort(begin(arr), end(arr));
            
            for(int k=0; k<n; k++){
                int i=k+1, j=n-1;
                
                while(i<j){
                    int cs=arr[i]+arr[j]+arr[k];
                    
                    if(cs>=sum){
                        j--;
                    } else {
                        ans=ans+(j-i);
                        i++;
                    }
                }
            }

            return ans;
        }


};


int main(){
    Solution sol;
    int sum=86;
    vector<int> arr = {30, 8, 23, 6, 10, 9, 31, 7, 19, 20, 1, 33, 21, 27, 28, 3, 25, 26};

    int res=sol.countTriplets(sum, arr);
    cout<<"RES: "<<res<<endl;

}
