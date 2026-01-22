// Finds the number of right rotations in a rotated sorted array
// by locating the index of the minimum element.
// Time Complexity: O(log n), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>nums={4,5,6,7,0,1,2};
    int n=nums.size();
    int l=0,r=n-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(nums[mid]>nums[r]) l=mid+1;
        else r=mid;
    }
    cout<<l<<endl;
}