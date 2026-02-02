// Checks if two strings are isomorphic by verifying consistent character mapping.
// Uses frequency comparison as an early rejection and a forward mapping check.
// Time Complexity: O(n), Space Complexity: O(1) (bounded by character set)
# include <iostream>
# include <string>
# include <unordered_map>
using namespace std;
int main (){
    string s = "egg", t = "add";
    unordered_map<int,int>s0,t0;
    for(int i=0;i<s.size();i++){
        s0[s[i]]++;
        t0[t[i]]++;
    }
    unordered_map<char,char> mp;
    if(t0.size()!=s0.size()){
        cout<<"false"<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++){
        if (mp.count(s[i])){
            if(mp[s[i]]==t[i]) continue;
            else{
                cout<<"false"<<endl;
                return 0;
            }
        }
        else mp[s[i]]=t[i];
    }
    cout<<"true"<<endl;
    return 0;
}