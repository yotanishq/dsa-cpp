// Using unordered_map for frequency counting.
// Keys are the actual values (can be negative or large).
// Average time complexity: O(n).
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
    unordered_map< int , int>mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int no;
    cout<<"Enter the no. whose frequency you want to count :";
    cin>>no;
    cout<<"Frequency : "<<mpp[no]<<endl;
}
