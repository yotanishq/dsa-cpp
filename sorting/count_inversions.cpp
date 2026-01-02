// Count number of inversions in an array using merge sort.
// Time: O(n log n), Space: O(n)
# include<iostream>
using namespace std;
int merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int temp[high-low+1];
    int count=0,index=0;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            index++,left++;
        }
        else if(arr[right]<arr[left]){
            temp[index]=arr[right];
            index++,right++;
            count+=mid-left+1;  
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        left++,index++;
    }
    while(right<=high){
        temp[index]=arr[right];
        right++,index++;
    }
    for(int i=0;i<index;i++){
        arr[i+low]=temp[i];
    } 
    return count;
}
int ms(int arr[],int low,int high){
    int mid=(low+high)/2;
    int net=0;
    if(low>=high)return 0;

// Total inversions =
// 1) inversions in left half
// 2) inversions in right half
// 3) inversions across halves (counted during merge)
    net += ms(arr, low, mid);           //1  
    net+=ms(arr,mid+1,high);            //2
    net+=merge(arr,low,mid,high);       //3
    
    return net;
}
int main(){
    int arr[]={2,4,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=n-1;
    cout<<ms(arr,low,high)<<endl;
}