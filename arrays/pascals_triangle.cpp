# include<iostream>
# include<vector>
using namespace std;
int main(){
    int numRows=5;
    int row=1;
    vector<vector<int>>result;
    while(row<=numRows){
        vector<int>r(row,1);
        for(int i=1;i<row-1;i++){
            r[i]=result[row-2][i-1]+result[row-2][i];
        }  
        result.push_back(r);
        row++;
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