// 560. Subarray Sum Equals K

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n=nums.size();
        int res=0;
        int cs=0;
        mp.insert({0,1});

        for(int i=0; i<n; i++){
            cs+=nums[i];

            int d = cs-k;
            if(mp.find(d)!=mp.end()){
                res+=mp[d];
            }

            mp[cs]++;
        }


        return res;
    }
};


int main(){
    Solution* sol = new Solution();
    vector<int> nums = {1,2,1,2,1};
    int k=3;
    int ans = sol->subarraySum(nums, k);
    cout<< "total subarrays : "<< ans << endl;

}
