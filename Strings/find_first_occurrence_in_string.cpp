// Finds the first index of needle in haystack using a naive string matching approach.
// Time Complexity: O(n * m), Space Complexity: O(1)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string haystack = "sadbutsad", needle = "sad";
    int n1=haystack.size();
    int n2=needle.size();
    int pos1=0,pos2=0;
    int index=-1,start=0;
    if(n2>n1) return -1;
    while(pos1<n1){
        if(haystack[pos1]==needle[pos2]){
            pos2++;
            if(pos2==n2){
                cout<<start<<endl;
            }
            pos1++;
        }
        else{
            start++;
            pos1=start;
            pos2=0;
        }
        
    }
    cout<<"-1"<<endl;
}