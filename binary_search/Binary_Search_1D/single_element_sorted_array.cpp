// Finds the single non-duplicate element in a sorted array, where every other element appears exactly twice.
// Time Complexity: O(log n), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> nums={1,1,2,2,3,3,4,4,8,8};
    int n=nums.size();
    int l=0,r=n-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if (mid==0) return nums[0];
        if (nums[mid]!=nums[mid+1]&&nums[mid]!=nums[mid-1]){
            cout<<nums[mid]<<endl;
            return 0;
        }
        else if ( nums[mid]==nums[mid-1]){
            if((mid-1)%2==0) l=mid+1;
            else r=mid;
        }
        else if ( nums[mid]==nums[mid+1]){
            if(mid%2==0) l=mid+1;
            else r=mid;
        }
    }
    cout<<nums[l]<<endl;
    return 0;
}