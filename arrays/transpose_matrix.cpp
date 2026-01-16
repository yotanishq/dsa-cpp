// Transposes a matrix by converting columns into rows.
// Time: O(rows * columns), Space: O(rows * columns)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row=matrix.size();
    int column=matrix[0].size();
    vector<vector<int>>result;
    for(int j = 0;j<column;j++){
        vector<int>v;
        for (int i = 0;i<row;i++){
            v.push_back(matrix[i][j]);
        }
        result.push_back(v);
    }
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j + 1 < result[i].size()) cout << ",";
            }
        cout << "]";
        if (i + 1 < result.size()) cout << ",";
    }
    cout << "]";
}