// Binary search on answer to find minimum eating speed.
// Uses feasibility check with ceiling division.
// Time Complexity: O(n log max(piles)), Space Complexity: O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<int>piles={30,11,23,4,20};
    int h=5;
    int n = piles.size();
    int l=1,r=*max_element(piles.begin(),piles.end());
    int ans=r;
    while(l<=r){
        int mid=l+(r-l)/2;
        long long count=0;
        for(int i=0;i<n;i++){
            count += 1ll*(piles[i] + mid - 1) / mid;
        }
        if(count<=h){
            ans=min(ans,mid);
            r=mid-1;
        }
        else if (count>h){
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}