// Remove all occurrences of a given value in-place using two pointers.
// Keeps valid elements at the front of the array.
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main(){
    int n=7;
    int arr[]={1,1,1,2,2,3,4};
    int remove=1;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=remove){
            arr[index]=arr[i];
            index++;
        }
    }
    for(int i=0;i<index;i++){
        cout<<arr[i]<<"\t";
    }
}