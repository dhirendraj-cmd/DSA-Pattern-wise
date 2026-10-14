// 209. Minimum Size Subarray Sum
// https://leetcode.com/problems/minimum-size-subarray-sum/description/


#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:
        void minSubArrayLen(int target, vector<int>& nums){
            int n=nums.size();
        // if(n==1 && nums[0]==target) return nums[0];

        int i=0, j=0, s=0;
        int mnl=INT_MAX;

        while(j<n){
            s+=nums[j];
            if(s<target){
                j++;
            } else if(s==target){
                mnl=min(mnl, j-i+1);
                j++;
            } else if(s>target){
                mnl=min(mnl, j-i+1);
                while(s>=target){
                    s-=nums[i];
                    i++;

                    if(s>=target){
                        mnl=min(mnl, j-i+1);
                    }
                }
                j++;
            }
        }

        cout << "minLength: " << mnl <<endl;
        }
};

int main(){
    Solution sol;
    vector<int> nums={1,4,4};
    int target=4;
    sol.minSubArrayLen(target, nums);
}
