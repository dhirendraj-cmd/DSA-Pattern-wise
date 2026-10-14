// 
// 

#include <iostream>
#include <vector>

using namespace std;

class solution{
    public:
        void sortColors(vector<int>& nums){
            int n=nums.size();
            int zero=0, one=0, two=0;

            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    zero++;
                }else if(nums[i]==1){
                    one++;
                } if(nums[i]==2){
                    two++;
                }
            }

            cout<<zero<<" "<<one<<" "<<two<<endl;

            for(int i=0; i<zero; i++){
                nums[i]=0;
            }
            for(int i=zero; i<zero+one; i++){
                nums[i]=1;
            }
            for(int i=zero+one; i<n; i++){
                nums[i]=2;
            }

            for(auto& x: nums){
                cout << x << " ";
            }

            cout<<endl;
            
        }
};


int main(){
    vector<int> nums = {2,0,1};
    solution sol;
    sol.sortColors(nums);
}