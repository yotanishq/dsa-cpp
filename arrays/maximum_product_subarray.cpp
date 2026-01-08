// Maximum Product Subarray using single-pass max/min tracking
// Time: O(n), Space: O(1)
# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int arr[]={-7,8,5,7,0,2,5,-9,0,-8,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxprod=arr[0];
    int minprod=arr[0];
    int ans=arr[0];
    int pos=1;
    while(pos<n){
        int x=arr[pos];
        int previousmax=maxprod;
        int previousmin=minprod;
        maxprod=max(x,max(previousmax*x,previousmin*x));
        minprod=min(x,min(previousmin*x,previousmax*x));
        ans=max(ans,maxprod);
        pos++;
    }
    cout<<ans<<endl;
}