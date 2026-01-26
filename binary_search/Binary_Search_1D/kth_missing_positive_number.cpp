// Finds the k-th missing positive number using binary search on the count of missing elements before each index.
// Time Complexity: O(log n), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>arr = {2,3,4,7,11};
    int k = 5;
    int n=arr.size();
    int l=0,r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if((arr[mid]-(mid+1))<k){
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<k+(l)<<endl;
}