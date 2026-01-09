// Count subarrays with XOR = K using prefix XOR and hashmap
// Time: O(n)  Space: O(n)
# include<iostream>
# include<unordered_map>
using namespace std;
int main(){
    int arr[]={4, 2, 2, 6, 4};
    int k=6;
    unordered_map<int,int>prefix={};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0,pos=0,xo=0;
    while (pos<n){
        xo^=arr[pos];
        if(xo==k){
            count++;
        }
        int rxo=xo^k;
        if(prefix.find(rxo)!=prefix.end()){
            count+=prefix[rxo];
        }
        prefix[xo]++;
        pos++;
    }
    cout<<count<<endl;
}