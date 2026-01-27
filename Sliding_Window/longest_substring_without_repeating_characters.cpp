// Finds the length of the longest substring without repeating characters
// using a sliding window and frequency tracking.
// Time Complexity: O(n), Space Complexity: O(Σ)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string s="abcabcbb";
    int n = s.size();
    int l=0,r=0;
    int max_len=0;
    unordered_map<int,int>freq;
    while(r<n){
        freq[s[r]]++;
        while (freq[s[r]] > 1) {
            freq[s[l]]--;
            l++;
        }
        max_len=max(r-l+1,max_len);
        r++;
    }
    cout<<max_len<<endl;
}