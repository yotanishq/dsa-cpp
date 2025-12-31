// Euclidean Algorithm [ GCD (A,B) = GCD (A%B,B) (for a>b)]
// Time Complexity: O(log min(a, b))
// Used to compute GCD efficiently
# include<iostream>
using namespace std;
int gcd ( int a, int b);
int main(){
    int a,b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b; 
    cout<<"The gcd of the numbers is : "<<gcd(a,b)<<endl;
}
int gcd ( int a, int b){
    while (a!=0 && b!=0){
        if(a>b) a=a%b;
        else if (a<b) b=b%a;
        else if (a==b) return a;

    }
    if (a==0) return b;
    return a;
}