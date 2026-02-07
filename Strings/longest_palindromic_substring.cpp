// Longest Palindromic Substring, Approach: Expand Around Center (odd & even)
// Time Complexity: O(n^2), Space Complexity: O(1)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string s = "babad";
    int n=s.size();
    int i=0;
    int best_start=0,max_len=0;
    while(i<n){
        int l=i,r=i;
        int len=-1,start=-1;
        int prev_max=max_len;

        while(l>=0&&r<n){
            if(s[l]==s[r]){
                start=l;
                l--,r++;
                len+=2;
            }
            else break;
        }
        
        max_len=max(len,max_len);
        if(prev_max<max_len) best_start=start;

        prev_max=max_len;
        l=i,r=i+1;
        len=0,start=-1;
        while(l>=0&&r<n){
            if(s[l]==s[r]){
                start=l;
                l--,r++;
                len+=2;
            }
            else break;
        }
        if(start>=0){
            max_len=max(len,max_len);
            if(prev_max<max_len) best_start=start;
        }
        i++;
    }
    string ans =s.substr(best_start,max_len);
    for( char it : ans){
        cout<<it;
    }
    cout<<endl;
}