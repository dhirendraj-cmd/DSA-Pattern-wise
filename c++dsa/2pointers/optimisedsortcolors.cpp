// 
// 

#include <iostream>
#include <vector>

using namespace std;

class solution{
    public:
        void sortColors(vector<int>& nums){
            int n=nums.size();

            int i=0, j=0, k=n-1;

            while(j<=k){
                if(nums[j]==1){
                    j++;
                } else if(nums[j]==0){
                    swap(nums[i], nums[j]);
                    i++;
                    j++;
                } else{
                    swap(nums[j], nums[k]);
                    k--;
                }
            }
            
            for(auto& x: nums){
                cout << x << " ";
            }

            cout<<endl;
            
        }
};


int main(){
    vector<int> nums = {2,0,2,1,1,0};
    solution sol;
    sol.sortColors(nums);
}