#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


class Solution{
    public:
        void twoSum(){
            cout<<"Two sum\n";

            vector<int> arr = {2,7,11,15};
            vector<int> res;
            int target = 9;

            unordered_map<int, int>seenMap;

            for(int i=0; i<arr.size(); i++){
                int x = target - arr[i];

                if (seenMap.find(x) != seenMap.end())
                {
                    res.push_back(seenMap[x]);
                    res.push_back(i);
                    break;
                }

                seenMap[arr[i]] = i;
                
            }

            cout << "Dict data:\n";
            cout << "{\n";
            for (auto const& x : seenMap)
            {
                int k = x.first;
                int v = x.second;
                cout << k << ":" << v << "\n";
            }
            cout << "}\n";
            
            
            cout << "Res is: [";
            for (size_t i = 0; i < res.size(); ++i) {
                cout << res[i] << (i == res.size() - 1 ? "" : ", ");
            }
            cout << "]\n";
        }
};

int main(){
    Solution sol;
    sol.twoSum();

}


