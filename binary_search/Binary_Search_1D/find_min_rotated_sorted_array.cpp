// Finds the minimum element in a rotated sorted array of unique elements
// using binary search by comparing with the right boundary.
// Time Complexity: O(log n), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> nums={3,4,5,1,2};
    int n= nums.size();
    int l=0,r=n-1;
    while(l<r){
        int mid =l+(r-l)/2;
        if (nums[mid]>nums[r]) l=mid+1;
        else {
            r=mid;
        }
    }
    cout<<nums[l]<<endl;
}