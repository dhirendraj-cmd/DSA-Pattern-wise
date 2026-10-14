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
            int slow = n, fast= getNextSum(n);
            while(fast!=1 && getNextSum(fast)!=1){
                
                if(slow==fast){
                    return false;
                }
                slow = getNextSum(slow);
                fast = getNextSum(getNextSum(fast));
            }
            return true;
        }
};


int main(){
    Solution* sol = new Solution();
    int n=195;

    bool res = sol->isHappy(n);

    cout << "Res: "<< res<< endl;
}
