// Check if the required pair was seen before.
// Otherwise, store the current number with its index.
// Time: O(n), Space: O(n)
# include<iostream>
#include <unordered_map>
using namespace std;
int main(){
   int n;
    cout<<"Enter the total entries :";
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cout<<"Enter #"<<i+1<<" entry : ";
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the targeted sum : " ;
    cin>>target;
    unordered_map< int , int>mpp;
    for(int i=0;i<n;i++){
        int need=target-arr[i];
        if(mpp.find(need)!=mpp.end()){
            cout<<"The index pair is :";
            cout <<"{"<< mpp[need] << "," << i<<"}" << endl;
            break;
        }
        mpp[arr[i]]=i;
    }
}