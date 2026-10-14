// 16. 3Sum Closest

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
         void threeSumClosest(vector<int>& nums, int target){
            int n = nums.size();
            int res=INT_MAX;

            sort(begin(nums), end(nums));

            for(int k=0; k<n; k++){
                // if(k>0 && nums[k]==nums[k-1]) continue;

                int i=k+1, j=n-1;

                while(i<j){
                    int cs=nums[i]+nums[j]+nums[k];
                    if(abs(target-cs) < abs(target-res)){
                        res=cs;
                    }

                    if(cs<target){ 
                        i++;
                    }
                    else {
                        j--;
                    }
                    
                    
                }

            }

            cout<<"res: "<< res<<endl;
         }
};

int main(){
    Solution sol;
    vector<int> nums = {-1,2,1,-4};
    int target = 1;

    sol.threeSumClosest(nums, target);

}