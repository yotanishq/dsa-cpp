// Rearrange array so positives are at even indices and negatives at odd indices.
// Relative order of elements is preserved.
// Time: O(n), Space: O(n)
# include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,8,-3,-5,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int even=0,odd=1;
    int pos=0;
    while(pos<n){
        if (arr[pos]<0){
            temp[odd]=arr[pos];
            odd+=2;
        }
        if (arr[pos]>0){
            temp[even]=arr[pos];
            even+=2;
        }
        pos++;
    }
    for(auto it : temp){
        cout<<it<<"\t";
    }
}