// Find the length of the longest subarray with sum equal to k
// using prefix sum and hashmap.
// Time: O(n), Space: O(n)
# include<iostream>
# include<algorithm>
# include<unordered_map>
using namespace std;
int main (){
    int arr[]={1,-1,5,-2,3},k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0,max_len=0,pos=0;
    unordered_map<int,int>prefixSum;
    while(pos<n){
        int curr_len=0;
        sum+=arr[pos];
        if (sum==k){
            curr_len=pos+1;
            max_len=max(max_len,curr_len);
        }
        curr_len=0;
        int rem = sum-k;
        if (prefixSum.find(rem)!=prefixSum.end()){
            curr_len=pos-prefixSum[rem];
            max_len=max(max_len,curr_len);
        }
        if (prefixSum.find(sum)==prefixSum.end()){
            prefixSum[sum]=pos; 
        }
        pos++;
    }
    cout<<max_len<<endl;
}