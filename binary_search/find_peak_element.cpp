// Finds a peak element in an array using binary search.
// A peak element is greater than its neighbors.
// Time Complexity: O(log n), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,1,3,5,6,4};
    int n=nums.size();
    if (n==1) return 0;
    int l=0,r=n-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if (nums[mid]>nums[mid+1]) r=mid;
        else l=mid+1;   
    }
    cout<<l<<endl;
}