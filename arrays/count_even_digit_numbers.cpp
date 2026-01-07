# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>arr={34,324,4534,324234,543,34567};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0,pos=0,count_even=0;
    vector<int>nums=arr;
    while(pos<n){
        if (nums[pos]==0){
            pos++;
        }
        else {
            nums[pos]=nums[pos]/10;
            count++;
            if(nums[pos]==0){
                pos++;
                if(count%2==0){
                    count_even++;
                }
                count=0;
            }
        }
    }
    cout<<count_even<<endl;
}