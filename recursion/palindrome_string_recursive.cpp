// Recursive palindrome check for strings (case-insensitive, alphanumeric only)
// Key learnings:
// Use += or push_back() instead of s = s + char to avoid O(n^2) memory usage
// Time Complexity: O(n)
// Space Complexity: O(n) due to recursion stack
# include<iostream>
# include<string>
# include<algorithm>
# include<cctype>
using namespace std;
bool palindrome(const string& net, int i) {
    int n = net.size();
    if (i >= n / 2) return true;
    if (net[i] != net[n - i - 1])
        return false;
    return palindrome(net, i + 1);
}
    int main(){
        cout<<"Enter any string : ";
        string s,net;
        getline(cin,s);
        for ( auto it : s){
            if (isalpha(it)||isdigit(it)){
                net+=(char)tolower(it);
            }
        }
        
        cout<< palindrome(net,0) <<endl;
        
    }
        
