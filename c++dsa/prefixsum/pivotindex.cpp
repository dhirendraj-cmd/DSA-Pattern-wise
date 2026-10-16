// 724. Find Pivot Index

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n, 0);
        vector<int> suffix(n, 0);
        int res=-1;

        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }

        cout<<"prefix array: ";
        for(int i=0; i<prefix.size(); i++){
            cout<<prefix[i]<< " ";
        }
        cout<<endl;
        
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1]+nums[i+1];
        }
        cout<<"suffix array: ";
        for(int i=0; i<suffix.size(); i++){
            cout<<suffix[i]<< " ";
        }
        cout<<endl;

        for(int i=0; i<prefix.size(); i++){
            if(prefix[i]==suffix[i]){
                cout<<"found"<<endl;
                return i;
            }
        }

        return res;

    }
};


int main(){
    Solution* sol = new Solution();
    vector<int> nums = {2,1,-1};
    int ans = sol->pivotIndex(nums);
    cout<< "PIVOT INDEX IS: "<< ans << endl;


}
