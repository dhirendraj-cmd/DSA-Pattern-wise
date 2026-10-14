#include <iostream>
#include <vector>

using namespace std;


class Solution{
    public:
        void reverse(){
            vector<int> arr = {3,1,6,1,9};

            cout<<"Before REVERSE>>>\n";

            for(int x=0; x<arr.size(); x++){
                cout << arr[x] << " ";
            }

            cout<<"\n";
            
            int i = 0;
            int j = arr.size()-1;
            
            while (i<j)
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
            
            cout<<"After REVERSE>>>\n";
            
            for(int x=0; x<arr.size(); x++){
                cout << arr[x] << " ";
            }
            cout<<"\n";
            
        }

};


int main(){
    Solution sol;
    sol.reverse();


}

