// Finds the largest odd-numbered prefix in a numeric string by scanning from right to left
// Time Complexity: O(n), where n is the length of the string, Space Complexity: O(1)
# include <iostream>
# include <string>
using namespace std;
int main (){
    string num = "35427";
    int n=num.size();
    int pos=n-1;
    while(pos>=0){
        int odd=num[pos]-'0';
        if(odd%2==1){
            cout<<num.substr(0, pos + 1)<<endl;
            return 0;
        }
        pos--;
    }
    cout<<""<<endl ;
    return 0;
}