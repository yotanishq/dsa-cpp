// Fix start index and expand end index while maintaining character frequency array.
// For each substring, compute  max frequency and min non-zero frequency.
// Time Complexity: O(n^2), Space Complexity: O(1)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string s = "aabcbaa";
    int n=s.size();
    int beauty=0;
    for(int i =0;i<n;i++){
        int arr[26]={0};
        for(int j =i;j<n;j++){
            arr[s[j]-'a']++;
            int mx = 0;
            for (int i = 0; i < 26; i++) {
                mx = max(mx, arr[i]);
            }
            int mn = INT_MAX;
            for (int i = 0; i < 26; i++) {
                if (arr[i] > 0) {
                    mn = min(mn, arr[i]);
                }
            }
            beauty+=mx-mn;
        }
    }
    cout<<beauty<<endl;
}