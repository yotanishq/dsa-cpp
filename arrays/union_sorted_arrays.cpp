// Find union of two sorted arrays using two pointers while avoiding duplicates.
// Time: O(n1 + n2), Space: O(n1 + n2)
# include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,2,3,4},arr2[]={2,3,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2];
    int l1=0,l2=0,index=0;
    while(l1<n1&&l2<n2){
        if(arr1[l1]<=arr2[l2]){
            if(index==0||arr[index-1]!=arr1[l1]){
                arr[index]=arr1[l1];
                index++;
            }
            l1++;
        }
        else if(arr2[l2]<arr1[l1]){
            if(index==0||arr[index-1]!=arr2[l2]){
                arr[index]=arr2[l2];
                index++;
            }
            l2++;
        }
    }
    while(l1<n1){
        if(index==0||arr1[l1]!=arr[index-1]){
            arr[index]=arr1[l1];
            index++;
        }
        l1++;
    }
    while(l2<n2){
        if(index==0||arr2[l2]!=arr[index-1]){
            arr[index]=arr2[l2];
            index++;
        }
        l2++;
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<"\t";
    }

}