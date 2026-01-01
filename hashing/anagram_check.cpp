// Count frequency of each character using fixed-size arrays.
// Compare frequencies to check if both strings are anagrams.
// Time: O(n), Space: O(1)
# include<iostream>
# include<map>
# include<string>
using namespace std;
int main(){
    string n,t;
    cout<<"Enter the first string : ";
    cin>>n;
    cout<<"\nEnter the second string : ";
    cin>>t;
    int arr1[256]={0},arr2[256]={0};
    for(int i=0;i<n.size();i++){
        arr1[n[i]]++;
    }
    for(int i=0;i<t.size();i++){
        arr2[t[i]]++;
    }
    for(int i=0;i<256;i++){
        if(arr1[i]!=arr2[i]) {
            cout<<"No the strings are not anagram";
            return 0;
        }
    }

    cout<<"Yes the strings are anagram"<<endl;
    return 0;
}