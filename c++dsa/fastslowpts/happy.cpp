#include <iostream>
#include <unordered_set>
using namespace std;

class Solution{
    public:
        int getNextSum(int n){
            int cs=0;
            while(n>0){
                int d=n%10;
                cs+=d*d;
                cout<<"C:"<<cs<<endl;
                n=n/10;
            }
            return cs;
        }
        bool isHappy(int n){
            unordered_set<int> visited;
            while(n!=1){
                cout<<"N:"<<n<<endl;

                if(visited.find(n)!=visited.end()){
                    return false;
                }

                visited.insert(n);
                n=getNextSum(n);
                cout<<"N1:"<<n<<endl;
            }
            return true;
        }
};


int main(){
    Solution* sol = new Solution();
    int n=2;

    bool res = sol->isHappy(n);

    cout << "Res: "<< res<< endl;
}
