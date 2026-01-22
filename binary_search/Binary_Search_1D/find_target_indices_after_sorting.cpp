// Finds all indices of a target value after sorting the array
// using binary search to locate the first and last occurrence.
// Time Complexity: O(n log n), Space Complexity: O(1) (excluding output)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,5,2,3,2};
    int target = 2;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int l=0,r=n-1,st=n,en=-1;
    while(l<=r){
        int mid = l + ( r - l ) / 2 ;
        if (nums[mid]>=target){
            r=mid-1;
            if ( nums[mid]==target ) st = mid;
        }
        else l=mid+1;
    }
    l=0,r=n-1;
    while(l<=r){
        int mid = l + ( r - l ) / 2 ;
        if (nums[mid]<=target){
            l=mid+1;
            if ( nums[mid]==target ) en = mid;
        }
        else r=mid-1;
    }
    vector<int>res;
    cout<<"[";
    if(st<=en){
        for ( int i = st ; i<=en ; i++){
            cout<<i;
            if(i<=en-1) cout<<",";
        }
    }
    cout<<"]\n";
}