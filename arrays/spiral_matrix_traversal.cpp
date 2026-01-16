// Returns elements of a matrix in spiral order.
// Time: O(rows * columns), Space: O(1) excluding output
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row=matrix.size();
    int column=matrix[0].size();
    int top=0;
    int right=column-1;
    int bottom=row-1;
    int left=0;
    while (left<=right&&top<=bottom){
        for (int j=left;j<=right;j++){
            cout<<matrix[top][j]<<"\t";
        }
        top++;
        for (int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<"\t";
        }
        right--;
        for (int j=right;j>=left;j--){
            cout<<matrix[bottom][j]<<"\t";
        }
        bottom--;
        for (int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<"\t";
        }
        left++;
    }
}