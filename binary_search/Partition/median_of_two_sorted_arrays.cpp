// Binary search on partition size.
// Split arrays such that left partition contains (n1 + n2 + 1) / 2 elements.
// Ensure : max(left partitions) <= min(right partitions).
// If total length is odd : Median is max(left partitions).
// If even : Median is average of max(left) and min(right).
// Time Complexity : O(log(min(n1, n2))), Space Complexity : O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<int>a={1, 4, 8, 10, 12};
    vector<int>b={5, 7, 11, 15, 17};
    int n1=a.size(),n2=b.size();
    int k=(n1+n2+1)/2;
    int l=max(0,k-n2),r=min(k,n1);
    float ans;
    while(l<=r){
        int mid=l+(r-l)/2;
        int l1 = (mid<=0) ? INT_MIN:a[mid-1];
        int r1 = (mid<n1) ? a[mid]:INT_MAX;
        int l2 = (k-mid<=0) ? INT_MIN:b[k-mid-1];
        int r2 = (k-mid<n2) ? b[k-mid]:INT_MAX;
        if(max(l1,l2)<=min(r1,r2)){
            if((n1+n2)%2!=0){
                ans=max(l1,l2);
                break;
            }
            else{
                ans=(max(l1,l2)+min(r1,r2))/2.0;
                break;
            }
        }
        else{
            if (l1>r2) r=mid-1;
            else if (l2>r1) l=mid+1; 
        }
    }
    cout<<ans<<endl;
}