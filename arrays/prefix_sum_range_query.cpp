// Build prefix sum array to answer range sum queries in O(1) time.
// Time: O(n + q), Space: O(n)
# include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    int l=2,r=4;
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
        
    }
    if (l==0){
        cout<<prefix[r];
        return 0;
    }
    cout<<prefix[r]-prefix[l-1];
    return 0;
}