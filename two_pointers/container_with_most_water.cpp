// Two-pointer approach to find maximum water container.
// Time Complexity: O(n), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    int i=0,j=height.size()-1;
    int area=0,ans=0;
    while(i<j){
        ans=max(ans,(j-i)*min(height[i],height[j]));
        if(height[j]>=height[i]) i++;
        else  j--;
    }
    cout<<ans<<endl;
}