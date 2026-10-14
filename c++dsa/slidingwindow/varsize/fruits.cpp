// Fruit Into Baskets
// https://leetcode.com/problems/fruit-into-baskets/description/


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution{
    public:
        int totalFruit(vector<int>& fruits) {
            int n=fruits.size();
            // if(n==1) return 1;
            // if (n==2 && fruits[0]==fruits[1]) return 2;

            int i=0;
            int mx=INT_MIN;
            unordered_map<int, int> hmp;

            for(int j=0; j<n; j++){
                if(hmp.find(fruits[j])!=hmp.end()){
                    hmp[fruits[j]]++;
                } else{
                    hmp[fruits[j]]=1;
                }

                if(hmp.size()>2){
                    while(hmp.size()>2){
                        hmp[fruits[i]]--;
                        if(hmp[fruits[i]]==0){
                            hmp.erase(fruits[i]);
                        }
                        i++;
                    }
                } else if(hmp.size()==2){
                    int cs=0;
                    for(auto& x: hmp){
                        cs+=x.second;
                    }
                    mx=max(cs, mx);
                } else if(hmp.size()==1){
                    mx=max(mx, hmp[fruits[j]]);
                }

            }

            for(const auto& x: hmp){
                cout << x.first <<": "<<x.second<<endl;
            }
            return mx;
        }

};

int main(){
    Solution sol;
    vector<int> fruits = {1};
    int res = sol.totalFruit(fruits);

    cout<<"res: "<<res<<endl;

    return 0;
}
