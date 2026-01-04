// Maximum Subarray Sum (Kadane's Algorithm)
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main(){
    int arr[]={-3,-9,5,-3,-1,8,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_sum=arr[0],current_sum=0;
    int pos=0;
    while (pos<n){

        // Extend the current subarray by including arr[pos]
        current_sum+=arr[pos];

        // If starting fresh from arr[pos] is better than continuing,
        // drop the previous subarray
        if(current_sum<arr[pos]){
            current_sum=arr[pos];
        }
        max_sum=max(current_sum,max_sum);
        pos++;
    }
    cout<<max_sum<<endl;
}