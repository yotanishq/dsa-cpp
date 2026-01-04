// Count subarrays with given sum using prefix sum and hashmap.
// Time: O(n), Space: O(n)
# include<iostream>
# include<unordered_map>
using namespace std;
int main(){
    int arr[]={-1,1,2,3,-2,4,-1};
    int k=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0,pos=0,count=0;
    unordered_map<int ,int>track;
    track[0]=1;
    while(pos<n){
        sum+=arr[pos];
        int rem =sum-k;
        if(track.find(rem)!=track.end()){
            count+=track[rem];
        }
        track[sum]++;
        pos++;
    }
    cout<<count<<endl;
}