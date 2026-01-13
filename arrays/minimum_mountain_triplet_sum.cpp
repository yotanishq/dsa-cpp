// Finds the minimum sum of a mountain triplet by fixing the middle element
// and scanning for the smallest valid values on the left and right.
// Time complexity: O(n^2), Space complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>nums={8,6,1,5,3};
    int n = nums.size();
    int i=1,sum=INT_MAX;
    while ( i<=n-2 ){
        int min_l=INT_MAX,min_r=INT_MAX;
        for(int j=0;j<i;j++){
            min_l=min(min_l,nums[j]);
        }
        for(int k=i+1;k<n;k++){
            min_r=min(min_r,nums[k]);
        }
        if(min_l<nums[i]&&min_r<nums[i]){
            sum=min(sum,min_l+min_r+nums[i]);
        }
        i++;
    }
    if (sum==INT_MAX) cout<<"-1"<<endl;
    else cout<<sum<<endl;
}