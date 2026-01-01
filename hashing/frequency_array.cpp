// Constraint: -5000 <= value <= 5000
// Using array-based hashing with an offset to handle negative values.
// Index mapping: index = value + OFFSET
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total entries :";
    cin>>n;
    int arr[n];
    cout<<"Please enter values btw (-5000,5000)";
    for (int i =0;i<n;i++){
        cout<<"Enter #"<<i+1<<" entry : ";
        cin>>arr[i];
    }
    const int OFF_SET = 5000;
    const int SIZE = 10001;

    int hash[SIZE] = {0};

    for(int i=0;i<n;i++){
        hash[arr[i]+OFF_SET]++;
    }
    int no;
    cout<<"Enter the no. whose frequency you want to count :";
    cin>>no;
    cout<<"\nFrequency : "<<hash[no+OFF_SET]<<endl;
}