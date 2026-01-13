# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    int n =nums.size();
    vector<vector<int>> result;
    sort(nums.begin(),nums.end());
    int i=0,l=i+1,r=n-1;
    while (i<=n-3){
        if(l>=r){
            i++;
            while (i < n-2 && nums[i] == nums[i-1]) i++;
            l=i+1,r=n-1;
        }
        if(l<r){
            if(nums[i]+nums[l]+nums[r]>0){
                r--;
            }
            else if(nums[i]+nums[l]+nums[r]<0){
                l++;
            }
            else if(nums[i]+nums[l]+nums[r]==0){
                result.push_back({nums[i], nums[l], nums[r]});
                l++,r--;
                while (l < r && nums[l] == nums[l-1]) l++;
                while (l < r && nums[r] == nums[r+1]) r--;
            }
        }
    }
    cout<<"[";
    for ( auto it : result){
        cout<<" ["<<it[0]<<","<<it[1]<<","<<it[2]<<"] ";
    }
    cout<<"]"<<endl;
}