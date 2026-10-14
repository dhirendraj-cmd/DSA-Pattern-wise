#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n =nums.size();
        int mxprod = nums[0];
        int mnprod = nums[0];
        int res = nums[0];

        for(int i=1; i<n; i++){
            int v1 = nums[i];
            int v2 = nums[i]*mxprod;
            int v3 = nums[i]*mnprod;

            mxprod = max(v1, max(v2, v3));
            mnprod = min(v1, min(v2, v3));
            res = max(res, max(mxprod, mnprod));
        }

        return res;
    }
};


int main(){
    Solution* sol = new Solution();
    vector<int> nums = {-2,3,-4};
    int ans = sol->maxProduct(nums);
    cout<< "MAX PROD IS: "<< ans << endl;


}
