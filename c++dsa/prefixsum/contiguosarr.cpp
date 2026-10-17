// 525. Contiguous Array



#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int> mp;
        int zero=0, one=0, mx;
        int d, res=0;


        for(int i=0; i<n; i++){
            if(nums[i]==0){
                zero++;
            } else if(nums[i]==1){
                one++;
            }

            d=zero-one;
            if(d==0){
                res=max(res, i+1);
                continue;
            }

            if(mp.find(d)!=mp.end()){
                mx=i-mp[d];
                res=max(res, mx);
            } else{
                mp.insert({d, i});
            }
        }

        for(auto& x: mp){
            cout << x.first <<" : "<<x.second<<endl;
        }

        return res;
    }
};



int main(){
    Solution* sol = new Solution();
    vector<int> nums = {0,1,1,1,1,1,0,0,0};
    int ans = sol->findMaxLength(nums);
    cout<< "max length: "<< ans << endl;

}
