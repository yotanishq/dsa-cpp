// Recursive string palindrome check using in-place swaps
# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
void rev(string &s, int n,int i){
        if (i>=n/2) return;
        swap (s[i],s[n-i-1]);
        rev(s,n,i+1);
}
int main(){
    string s= "Hello";
    int n= s.size();
    int i=0;
    string original=s;
    rev(s,n,i);
    if (s==original) cout<<"The string is a palindrome";
    else cout<<"The string is not a palindrome";
    cout<< endl;
}