// Rotates an n x n matrix by 90 degrees clockwise in-place.
// Time: O(n * n), Space: O(1)
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n=matrix.size();
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i>=j){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    int left=0,right=n-1;
    while (left<=right){
        for (int i=0;i<n;i++){
            swap(matrix[i][left],matrix[i][right]);
        }
        left++,right--;
    }
    cout << "[";
    for (int i = 0; i < matrix.size(); i++) {
        cout << "[";
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j];
            if (j + 1 < matrix[i].size()) cout << ",";
            }
        cout << "]";
        if (i + 1 < matrix.size()) cout << ",";
    }
    cout << "]"<<endl;
}