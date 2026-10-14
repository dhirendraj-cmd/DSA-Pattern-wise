// Count Occurences of Anagrams
// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1


#include <iostream>
#include <vector>
#include <deque>
#include <unordered_map>
using namespace std;

// problem with this approach is it will be slow causing o(m^2) bcoz modifying inside loop is slow
// class Solution{
//     public:
//         void searchAnagram(string &pat, string &txt){
//             int cntword=0;
//             deque<char> arr;
//             int i=0, j=0;
//             int n=txt.length();
//             int m=pat.length();

//             while(j<n){
//                 arr.push_back(txt[j]);
//                 if(j-i+1<m){
//                     j++;
//                 } else if(j-i+1==m){
//                     int cntltr=0;

//                     string temp = pat;

//                     for(char x: arr){
//                         int pos = temp.find(x);
//                         if(pos==string::npos){
//                             break;
//                         } else{
//                             cntltr++;
//                             temp.erase(pos, 1);
//                         }

//                         cout << "cnt ltr: " << cntltr << endl;
//                     }

//                     if (cntltr == m) cntword++;
//                     i++;
//                     j++;
//                     if(!arr.empty()) arr.pop_front();
//                 }

//             }

//             for(char x: arr){
//                     cout << x << "";
//                 }
//             cout << endl;
//         }
// };


class Solution{
    public:
        void searchAnagram(string &pat, string &txt){
            int m=pat.length();
            int n=txt.length();
            int i=0, j=0;
            unordered_map<char, int> mp;
            for(int p=0; p<m; p++){
                if(mp.find(pat[p])!=mp.end()){
                    mp[pat[p]]+=1;
                } else{
                    mp[pat[p]]=1;
                }
            }
            int cnt = mp.size();

            for(const auto& pair : mp){
                cout<<pair.first<<":"<<pair.second<<endl;
            }

            int ans=0;

            while(j<n){
                if(mp.find(txt[j]) != mp.end()){
                    mp[txt[j]]-=1;
                    if(mp[txt[j]]==0){
                        cnt--;
                    }
                }

                if(j-i+1<m){
                    j++;
                } else if(j-i+1==m){
                    if (cnt==0){
                        ans++;
                    }

                    if(mp.find(txt[i])!=mp.end()){
                        mp[txt[i]]+=1;
                        if(mp[txt[i]]==1){
                            cnt+=1;
                        }
                    }
                    i++;
                    j++;
                }
            }

            cout << "ans: " << ans << endl;
            for(const auto& pair : mp){
                cout<<pair.first<<":"<<pair.second<<endl;
            }
        }

};


int main(){
    string txt = "forxxorfxdofr";
    string pat = "for";

    Solution sol;
    sol.searchAnagram(pat, txt);

    return 0;
}

