// Finds the first and last position of a target in a sorted array
// using two binary searches (lower and upper bound).
// Time: O(log n), Space: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> nums={5,7,7,8,8,10};
    int target=8;
    int n=nums.size();
    int l=0,r=n-1,ans=-1;
    vector<int>res;
    while (l<=r){
        int mid = l+(r-l)/2;
        if ( nums[mid]>=target){
            r=mid-1;
            if(nums[mid]==target) ans=mid;
        }
        else l=mid+1;
    }
    res.push_back(ans);
    l=0,r=n-1,ans=-1;
    while (l<=r){
        int mid = l+(r-l)/2;
        if ( nums[mid]<=target){
            l=mid+1;
            if(nums[mid]==target) ans=mid;
        }
        else r=mid-1;
    }
    res.push_back(ans);
    cout<<" ["<<res[0]<<","<<res[1]<<"]\n";
}