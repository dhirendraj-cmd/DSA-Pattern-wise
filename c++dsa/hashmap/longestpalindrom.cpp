// 409. Longest Palindrome

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char, int> mp;

        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        bool odd = false;
        int res=0;

        for(auto i: mp){
            int val = i.second;
            if(val%2==0){
                res+=val;
            } else if(val%2==1){
                odd=true;
                res+=val-1;
            }
        }

        if(odd==false){
            return res;
        } else{
            return res+1;
        }
    }
};






int main(){
    Solution sol;
    string s="civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    int res = sol.longestPalindrome(s);
    cout<<"Res: "<<res<<endl;

    return 0;
}