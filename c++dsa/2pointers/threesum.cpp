#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
         void threeSum(vector<int>& nums){
            int n=nums.size();
            sort(nums.begin(), nums.end());
            vector<vector<int>> res;

            for(int k=0; k<n; k++){
                if(k>0 && nums[k]==nums[k-1]){
                    continue;
                }

                int l=k+1, r=n-1;
                int n1=nums[k];
                int target=-n1;
                while(l<r){
                    if(nums[l]+nums[r]>target){
                        r--;
                    } else if(nums[l]+nums[r]<target){
                        l++;
                    } else{
                        while(l<r && nums[l]==nums[l+1]) l++;
                        while(l<r && nums[r]==nums[r-1]) r--;

                        res.push_back({-target, nums[l], nums[r]});

                        l++;
                        r--;
                    }
                }

            }

            cout<<"res: ";
            for(int x=0; x<res.size(); x++){
                for(int m=0; m<res[x].size(); m++){
                    cout << res[x][m] << " ";
                }
            }

            cout<<endl;
            
         }
};


int main(){
    Solution sol;
    vector<int> nums = {1,2,0,1,0,0,0,0};

    sol.threeSum(nums);

    return 0;
}

