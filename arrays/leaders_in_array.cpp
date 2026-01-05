// Find leaders in an array by scanning from right to left.
// Time: O(n), Space: O(n) for output
# include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={16,17,4,3,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>greater;
    int maxi=arr[n-1];
    for (int i=n-1;i>=0;i--){
        if(arr[i]==max(arr[i],maxi)){
            greater.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    for (auto it : greater){
        cout<<it<<endl;
    }
}