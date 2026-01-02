// Merge two sorted arrays using two pointers.
// Time: O(n1 + n2), Space: O(n1 + n2)
# include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,2,3,3,4,8,9},arr2[]={3,4,5,7,30};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int left=0;
    int right=0;
    int temp[n1+n2],index=0;
    while(left<n1&&right<n2){
        if(arr1[left]<=arr2[right]){
            temp[index]=arr1[left];
            index++,left++;
        }
        else if(arr1[left]>arr2[right]){
            temp[index]=arr2[right];
            index++,right++;
        }
    }
    while(left<n1){
        temp[index]=arr1[left];
        index++,left++;
    }
    while(right<n2){
        temp[index]=arr2[right];
        index++,right++;
    }
    for(int i=0;i<index;i++){
        cout<<temp[i]<<"\t";
    }
}