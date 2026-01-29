//Binary search on partition size.
//Choose x elements from the first array and k-x from the second.
//Adjust the partition such that : max(left partitions) <= min(right partitions).
//Time Complexity : O(log(min(n1, n2))), Space Complexity : O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<int>a={1, 4, 8, 10, 12};
    vector<int>b={5, 7, 11, 15, 17};
    int k=7;
    int n1=a.size(),n2=b.size();
    int l=max(0,k-n2),r=min(k,n1);
    int ans=-1;
    while(l<=r){
        int mid =l+(r-l)/2;
        int l1,l2;
        int r1,r2;
        if(mid<=0) l1=INT_MIN;
        else  l1=a[mid-1];
        if(mid<n1) r1=a[mid];
        else r1=INT_MAX;
        if(k-mid-1<0)  l2=INT_MIN;
        else  l2=b[k-mid-1];
        if(k-mid<n2) r2=b[k-mid];
        else r2=INT_MAX;
        if(max(l1,l2)<=min(r1,r2)){
            ans=max(l1,l2);
            break;
        }
        else{
            if(l1>r2) r=mid-1;
            else if(l2>r1) l=mid+1;
        }
    }
    cout<<ans<<endl;
}