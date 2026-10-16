//974. Subarray Sums Divisible by K





#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n=nums.size();
        int res=0;
        int cs=0;
        mp.insert({0,1});

        for(int i=0; i<n; i++){
            cs+=nums[i];

            int d = cs%k;

            if(d<0){
                d+=k;
            }
            
            if(mp.find(d)!=mp.end()){
                    res+=mp[d];
            }

            mp[d]++;
        }


        return res;
    }
};


int main(){
    Solution* sol = new Solution();
    vector<int> nums = {-1,2,9};
    int k=2;
    int ans = sol->subarraysDivByK(nums, k);
    cout<< "total subarrays : "<< ans << endl;

}
