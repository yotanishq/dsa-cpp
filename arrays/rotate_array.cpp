// Rotate array to the right by k positions using reversal method.
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int rot=10;
    int rot_factor=rot%n;
    int l,r,temp;
    l=0;r=n-rot_factor-1;
    for (int i=0;i<(n-rot_factor)/2;i++){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++,r--;
    }
    l=n-rot_factor,r=n-1;
    for(int j=n-rot_factor;j<(n-rot_factor)+(rot_factor)/2;j++){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++,r--;
    }
    l=0;r=n-1;
    for(int i=0;i<n/2;i++){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++,r--;
    }
    for(auto it :arr){
        cout<<it<<"\t";
    }
}