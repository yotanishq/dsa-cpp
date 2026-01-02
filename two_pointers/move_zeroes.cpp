// Move all zeroes to the end while keeping order of non-zero elements.
// Uses two pointers to rearrange in-place.
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={0,8,-2,56,0,1,0};
    int index=0;
    int last=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}