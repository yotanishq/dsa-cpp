// Find the majority element using Boyer–Moore Voting Algorithm.
// Time: O(n), Space: O(1)
# include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,1,1,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0,ele;
    for (int i=0;i<n;i++){
        if (count==0){
            ele=arr[i];
        }
        if (ele==arr[i]){
            count++;
        }
        else count--;
    }
    cout<<ele<<endl;
}