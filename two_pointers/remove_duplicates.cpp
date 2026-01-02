// Remove duplicates from a sorted array in-place using two pointers.
// Keeps only unique elements at the front of the array.
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={1,1,1,2,2,3,4};
    int index=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[index-1]){
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<"\t";
    }
}