// Reverse Pairs problem solved using merge sort based divide and conquer
// Time: O(n log n), Space: O(n)
# include<iostream>
using namespace std;
int merge (int arr[],int low , int mid , int high){
    int i=low,j=mid+1,pos=0;
    int temp[high-low+1];
    int count_pair=0;
     while(i<=mid&&j<=high){
        if(arr[i]>2LL*arr[j]){
            count_pair+=mid-i+1;
            j++;
        }
        else{
            i++;
        }
    }
    int left=low,right=mid+1;
    while (left<=mid&&right<=high){
        if (arr[left]<=arr[right]){
            temp[pos]=arr[left];
            left++,pos++;
        }
        else if (arr[right]<arr[left]){
            temp[pos]=arr[right];
            right++,pos++;
        }
    }
    while(left<=mid){
        temp[pos]=arr[left];
        left++,pos++;
    }
    while(right<=high){
        temp[pos]=arr[right];
        right++,pos++;
    } 
    for(int i=low;i<high+1;i++){
        arr[i]=temp[i-low];
    }
    return count_pair;
}
int ms ( int arr[],int low , int high){
    int mid = (high + low)/2;
    if (low>=high) return 0;
    int a=ms(arr,low,mid)+ms(arr,mid+1,high);
    int b=merge(arr,low,mid,high);
    return a+b;

}
int main(){
    int arr[]={7,3,8,4,3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low =0, high =n-1;
    cout<<ms(arr,low,high)<<endl;
}