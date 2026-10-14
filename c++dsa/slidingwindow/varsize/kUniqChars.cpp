// Longest Substring with K Uniques
// https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution{
    public:
        int longestKSubstr(string &s, int k){
            int i=0;
            unordered_map<char, int> hmp;
            int n=s.length();
            int mx=-1;

            for (int j=0; j<n; j++){
                if(hmp.find(s[j])!=hmp.end()){
                    hmp[s[j]]+=1;
                } else{
                    hmp[s[j]]=1;
                }

                if(hmp.size() == k){
                    mx=max(mx, j-i+1);
                } else if(hmp.size()>k){
                    while (hmp.size()>k)
                    {
                        if(hmp.find(s[i])!=hmp.end()){
                            hmp[s[i]]--;
                            if(hmp[s[i]]==0){
                                hmp.erase(s[i]);
                            }
                            i++;
                        }
                    }
                    
                }
            }

            return mx;
        }

};


int main(){
    Solution sol;
    string s="aabaaab";
    int k=2;

    int res=sol.longestKSubstr(s, k);
    cout << "max length: "<<res<<endl;

    return 0;
}

