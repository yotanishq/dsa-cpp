// Uses sliding window to find the maximum length of a substring
// that can be made all 'T' or all 'F' using at most k changes.
// Time Complexity: O(n), Space Complexity: O(1)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string answerKey = "TTFTTFTT";
    int k=1;
    int n=answerKey.size();
    int l=0,r=0;
    int used=0,maxmT=0;
    while(r<n){
        if(answerKey[r]=='F'){
            used++;
            
        }
        while(used>k){
            if(answerKey[l]=='F') used--;
            l++;
        }
        r++;
        maxmT=max(maxmT,r-l);
    }
    l=0,r=0;
    used=0;
    int maxmF=0;
    while(r<n){
        if(answerKey[r]=='T'){
            used++;
            
        }
        while(used>k){
            if(answerKey[l]=='T') used--;
            l++;
        }
        r++;
        maxmF=max(maxmF,r-l);
    }
    cout<<max(maxmT,maxmF)<<endl;
}