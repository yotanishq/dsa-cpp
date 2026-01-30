// Counts valid combinations under given constraints using range counting.
// Time Complexity: O(n), Space Complexity: O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    int n= 10, limit= 4;
    int i=min(n,limit);
    int min_i=max(0,n-2*limit);
    long long count=0;
    while(i>=min_i){
        int j=n-i;
        int k=min(j,limit);
        int min_k=max(0,j-limit);
        count+=k-min_k+1;
        i--;
    }
    cout<<count<<endl;
}