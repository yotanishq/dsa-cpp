// Counting approach to sort 0s, 1s, and 2s.
// Count occurrences and overwrite the array.
// Time: O(n), Space: O(1)
# include<iostream>
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
    int hash[3]={0};
    for (int i =0;i<n;i++){
        hash[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<3;i++){
        while(hash[i]>0){
            arr[index]=i;
            hash[i]--;
            index++;
        }
    }
    for(auto it : arr){
        cout<<it<<"\t";
    }
}