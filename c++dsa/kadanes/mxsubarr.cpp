    #include <iostream>
    #include <vector>

    using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int mxsum = nums[0];
        int res = nums[0];
        for(int i=1; i<n; i++){
            int v1 = nums[i];
            int v2 = mxsum+nums[i];
            mxsum = max(v1, v2);
            res = max(res, mxsum);
        }

        return res;

    }
};


int main(){
    Solution* sol = new Solution();
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = sol->maxSubArray(nums);
    cout<< "MAX SUM IS: "<< ans << endl;


}

