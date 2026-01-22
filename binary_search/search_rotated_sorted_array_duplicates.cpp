// Searches for a target in a rotated sorted array that may contain duplicates.
// Uses modified binary search with fallback shrinking in ambiguous cases.
// Time Complexity: O(log n) average, O(n) worst case, Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int> nums={2,5,6,0,0,1,2};
    int target = 3;
    int n=nums.size();
        if(n==1){
        if(nums[0]==target){
            cout<<"1"<<endl;
            return 0;
        }
        else{
            cout<<"0"<<endl;
            return 0;
        }
    }
    int l=0,r=n-1,ans=0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if (nums[mid]==target){
            ans=1;
            break;
        }
        if (nums[mid]<=nums[r]){
            if (nums[mid]<nums[r]){
                if (target>=nums[mid]&&target<=nums[r]){
                    l=mid+1;
                }
                else r=mid;
            }
            else if (nums[mid]==nums[r]){
                for(int i=mid;i<=r;i++){
                    if( nums[i]==target ){
                        ans=1;
                        break;
                    }
                }
                if(ans==1) break;
                else r=mid-1;
            }
        }
        if(nums[mid]>=nums[l]) {
            if(nums[mid]>nums[l]){
                if(target>=nums[l]&&target<=nums[mid]){
                    r=mid;
                }
                else l=mid+1;
            }
            else if (nums[mid]==nums[l]){
                for(int i=l;i<=mid;i++){
                    if( nums[i]==target ){
                        ans=1;
                        break;
                    }
                }
                if (ans==1) break;
                else l=mid+1;
            }
        }
    }
    cout<<ans<<endl;
}