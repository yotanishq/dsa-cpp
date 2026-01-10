# include<iostream>
using namespace std;
int main(){
    int nums1[] = {1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;
    int l=m-1,r=n-1,index=m+n-1;
    while(l>=0&&r>=0){
        if(nums2[r]>=nums1[l]){
            nums1[index]=nums2[r];
            index--,r--;
        }
        else{
            nums1[index]=nums1[l];
            l--,index--;
        }
    }
    while(r>=0){
        nums1[index]=nums2[r];
        r--,index--;
    }
    for(auto it :nums1){
        cout<<it<<"\t";
    }
}