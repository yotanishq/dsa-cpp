// Binary search on answer to find the minimum day required to make at least m bouquets using k adjacent flowers.
// Uses a linear feasibility check per day.
// Time Complexity: O(n log max(bloomDay)), Space Complexity: O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<int>bloomDay = {1,10,3,10,2};
    int m=2,k=1;
    int n=bloomDay.size();
    long long l=*min_element(bloomDay.begin(),bloomDay.end());
    long long r=*max_element(bloomDay.begin(),bloomDay.end());
    long long ans=-1;
    if (1ll*m*k>n) return -1;
    while(l<=r){
        long long mid = l+(r-l)/2;
        int c=0,count=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]*1ll<=mid){
                c++;
                if(c==k){
                    count++;
                    c=0;
                }
            }
            else c=0;
            if(count==m) break;
        }
        if(count==m){
            r=mid-1;
            if(count==m){
            ans=mid;
            }
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}