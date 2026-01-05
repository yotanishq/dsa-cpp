// Print the subarray with maximum sum using Kadane's algorithm.
// Time: O(n), Space: O(1)
# include<iostream>
# include<unordered_map>
using namespace std;
int main(){
    int arr[] = {-2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0,maxsum=arr[0],l=0,pos=0,li=0,ri=0;
    while(pos<n){
        sum+=arr[pos];
        if (sum<arr[pos]){
            sum=arr[pos];
            l=pos;
        }
        if(sum>maxsum){
            maxsum=sum;
            li=l;
            ri=pos;
        }
        
        pos++;
    }
    for (int i=li;i<=ri;i++){
        cout<<arr[i]<<"\t";
    }
}