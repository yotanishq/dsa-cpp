// Longest consecutive non-zero elements
// Kadane-style greedy reset pattern
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,0,1,1,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    int pos=0;
    int curr_len=0,max_len=0;
    while(pos<n){
        curr_len+=1;
        if(arr[pos]==0){
            curr_len=0;
        }
        max_len=max(curr_len,max_len);
        pos++;
    }
    cout<<max_len<<endl;           
}