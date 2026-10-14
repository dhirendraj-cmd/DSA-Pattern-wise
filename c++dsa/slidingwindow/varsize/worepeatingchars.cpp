// Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution{
    public:
        int lengthOfLongestSubstring(string s){
            int n=s.size();

            int mx=0;
            int i=0;
            unordered_map<char, int> hmp;

            for(int j=0; j<n; j++){
                if(hmp.find(s[j])!=hmp.end()){
                    hmp[s[j]]++;
                } else{
                    hmp[s[j]]=1;
                }

                int k=j-i+1;

                while(hmp.size()<k){
                    hmp[s[i]]--;
                    if(hmp[s[i]]==0){
                        hmp.erase(s[i]);
                    }
                    i++;
                    k=j-i+1;
                }
                mx=max(mx, k);
            }
            return mx;
        }

};

int main(){
    Solution sol;
    string s = "bbbbb";
    int res = sol.lengthOfLongestSubstring(s);
    cout << "res: "<< res<<endl;
    return 0;
}
