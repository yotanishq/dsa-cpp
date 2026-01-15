# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>>matrix ={{1,1,1},{1,0,1},{1,1,1}};
    int m =matrix.size();
    int n =matrix[0].size();
    vector<int>x,y;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (matrix[i][j]==0){
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    for(int i=0;i<x.size();i++){
        for(int k=0;k<n;k++){
            matrix[x[i]][k]=0;
        }
    }
    for(int j=0;j<y.size();j++){
        for(int s=0;s<m;s++){
            matrix[s][y[j]]=0;
        }
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