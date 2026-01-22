// Computes floor(sqrt(x)) using binary search.
// Time Complexity: O(log x), Space Complexity: O(1)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    int x = 3994;
    int l=0,r=x,ans=0;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(1ll*mid*mid<=x){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
}