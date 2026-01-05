// Maximize profit from a single buy-sell transaction using greedy scan.
// Time: O(n), Space: O(1)
# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int prices[]={6,4,7,2,3,7,8};
    int n = sizeof(prices)/sizeof(prices[0]);
    int minm=prices[0];
    int result=0;
    for (int i=0;i<n;i++){
        result=max(result,prices[i]-minm);
        minm=min(minm,prices[i]);
    }
    cout<<result<<endl;
}