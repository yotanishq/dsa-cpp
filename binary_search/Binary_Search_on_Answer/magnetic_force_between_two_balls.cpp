// Uses binary search on answer to maximize the minimum distance between m balls placed at given positions.
// Time Complexity: O(n log D) [ D = max(position) - min(position) ], Space Complexity: O(1) 
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<int> position = {1,2,3,4,7}; 
    int m = 3;
    int n = position.size();
    sort(position.begin(),position.end());
    long long l=1,r=position[n-1]-position[0];
    int ans=1;
    while(l<=r){
        long long mid = l+(r-l)/2;
        int a=0,b=0;
        int used=0;
        while(used<m&&b<n){
            if(position[b]-position[a]>=mid){
                used++;
                a=b;
            }
            b++;
        }
        if(used>=m-1){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<endl;
}