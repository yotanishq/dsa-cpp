// Find intersection of two sorted arrays using two pointers.
// Time: O(n1 + n2), Space: O(min(n1, n2))
# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int arr1[]={1,2,2,3,4},arr2[]={2,2,3,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr[min(n1,n2)];
    int l1=0,l2=0,index=0;
    while(l1<n1&&l2<n2){
        if(arr1[l1]==arr2[l2]){
                arr[index]=arr1[l1];
                index++,l1++,l2++;   
        }
        else if(arr1[l1]<arr2[l2]){
            l1++;
        }
        else if(arr2[l2]<arr1[l1]){
            l2++;
        }
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<"\t";
    }

}