// leetcode 287

#include <iostream>
#include <vector>
using namespace std;


class Solution{
    public:
        void findDuplicate(vector<int>& nums){
            int n=nums.size();
            int fast = nums[0], slow = nums[0];

            do{
                slow=nums[slow];
                fast=nums[nums[fast]];
            } while(fast!=slow);

            int dups=nums[0];

            while(slow!=dups){
                dups=nums[dups];
                slow=nums[slow];
            }

            cout<<"RES:"<<slow<<endl;

        }
};

int main(){
    Solution sol;
    vector<int> nums = {1,3,4,2,2};

    sol.findDuplicate(nums);

    return 0;
}
