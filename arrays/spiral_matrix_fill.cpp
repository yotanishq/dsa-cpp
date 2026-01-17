// Fills an n x n matrix in spiral order.
// Time: O(n * n), Space: O(1) excluding output
# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number to make a n*n square matrix : ";
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));
    int left = 0,right=n-1,top=0,bottom=n-1;
    int val=1; 
    while(left<=right&&top<=bottom){
        for(int i = left;i<=right ;i++){
            mat[top][i]=val;
            val++;
        }
        top++;
        for(int j = top;j<=bottom ;j++){
            mat[j][right]=val;
            val++;
        }
        right--;
        for(int i = right;i>=left ;i--){
            mat[bottom][i]=val;
            val++;
        }
        bottom--;
        for(int j = bottom;j>=top ;j--){
            mat[j][left]=val;
            val++;
        }
        left++;
    }
    cout<<endl;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j]<<"\t";
            }
            cout<<endl<<endl;
    }
}