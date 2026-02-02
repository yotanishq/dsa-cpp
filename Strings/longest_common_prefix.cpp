// Finds the longest common prefix among all strings using horizontal scanning
// Time Complexity: O(S) (S = total number of characters across all strings), Space Complexity: O(1)
# include <iostream>
# include <string>
# include <vector>
using namespace std;
int main (){
    vector<string> strs={"flower","flow","flows"};
    string ans=strs[0];
    int n=strs.size();
    int pos=1;
    while(pos<n){
        int l=0;
        int count=0;
        while(l<ans.size()&&l<strs[pos].size()){
            if(strs[pos][l]==ans[l]) l++,count++;
            else break;
        }
        ans=strs[pos].substr(0,count);
        pos++;
    }
    cout<<ans<<endl;
}
        