#include <iostream>
#include <climits>
using namespace std;

int reverse(int x) {
    int revn=0;
        while(x!=0){
            if (revn>214748364) return 0;
            if (revn<-214748364) return 0;
            revn=revn*10+x%10;
            x/=10;
        }
        return revn;
}

int main() {
    int x;
    cin >> x;
    cout << reverse(x);
}

