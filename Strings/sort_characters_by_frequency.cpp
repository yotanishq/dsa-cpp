// Sorts characters in a string by decreasing frequency using bucket sort.
// Time Complexity: O(n), Space Complexity: O(n)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string s = "tree";
    int n=s.size();
    unordered_map<int,int>freq;
    int max_freq=0;
    for( auto it : s){
        freq[it]++;
        max_freq=max(max_freq,freq[it]);
    }
    vector<vector<int>>bucket(max_freq+1);
    for(auto c : freq){
        bucket[c.second].push_back(c.first);
    }
    string ans;
    ans.reserve(n);
    for(int f=max_freq;f>0;f--){
        for(auto c : bucket[f]){
            ans.append(f,c);
        }
    }
    cout<<ans<<"\n";
}