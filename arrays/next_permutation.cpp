// Generate the next lexicographical permutation of the array in-place.
// Time: O(n), Space: O(1)
# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int arr[]={3,5,7,8,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos=n-2,break_point,exchange_pos,found=0;
    while(pos>=0){
        if(arr[pos]<arr [pos+1]){
            break_point=pos,found=1;
            break;
        }
        pos--;
    }
    pos=n-1;
    if (found==1){
        while(pos>break_point){
            if(arr[pos]>arr[break_point]){
                swap(arr[pos],arr[break_point]);
                break;
            }
            pos--;
        }
            reverse(arr+break_point+1,arr+n);
    }
    
    if (found ==0){
        reverse(arr,arr+n);
    }
    for(auto it:arr){
            cout<<it<<"\t";
        }
}