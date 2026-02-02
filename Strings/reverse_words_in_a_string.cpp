# include <iostream>
# include <string>
using namespace std;
int main (){
    string s="the sky is blue";
    int n=s.size();
    int pos=0;
    vector<vector<char>>set;
    vector<char>words;
    while(pos<n){
        if(s[pos]!=' ') words.push_back(s[pos]);
        if(s[pos]==' '&&words.size()>0||(pos==n-1&&words.size()>0)){
            set.push_back(words);
            words.clear();
        }
        pos++;
    }
    int m=set.size();
    string ans;
    pos=m-1;
    while(pos>=0){
        for(int i=0;i<set[pos].size();i++){
            ans.push_back(set[pos][i]);
        }
        if(pos>0) ans.push_back(' ');
        pos--;
    }
    cout<<ans<<endl;
}