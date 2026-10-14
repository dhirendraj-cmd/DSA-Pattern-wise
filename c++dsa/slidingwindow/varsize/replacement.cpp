// Longest Repeating Character Replacement
// https://leetcode.com/problems/longest-repeating-character-replacement/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution{
    public:
        int characterReplacement(string s, int k) {
            int n=s.length();
            int i=0, mx=INT_MIN, mxf=0;
            unordered_map<char, int> mp;

            for(int j=0; j<n; j++){
                mp[s[j]]++;

                for(const auto& pair: mp){
                    mxf = max(mxf, pair.second);
                }

                while(((j-i+1)-mxf)>k){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                mx=max(j-i+1, mx);
            }

            return mx==INT_MIN ? 0: mx;
        
    }

};


int main(){
    Solution sol;
    string s="ABAB";
    int k=2;

    int res=sol.characterReplacement(s, k);

    cout<<"RES: "<<res<<endl;

    return 0;
}


