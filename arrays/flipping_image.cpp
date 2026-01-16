# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    vector<vector<int>> image = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    int row = image.size();
    int column = image[0].size();   
    for ( int i =0; i<row; i++){
        for ( int j =0; j<column/2; j++){
            swap(image[i][j],image[i][column-1-j]);
        }
    }
    for ( int i =0; i<row; i++){
        for ( int j =0; j<column; j++){
            if (image[i][j]==0) image[i][j]=1;
            else image[i][j]=0;
        }
    }
    cout << "[";
    for (int i = 0; i < image.size(); i++) {
        cout << "[";
        for (int j = 0; j < image[i].size(); j++) {
            cout << image[i][j];
            if (j + 1 < image[i].size()) cout << ",";
            }
        cout << "]";
        if (i + 1 < image.size()) cout << ",";
    }
    cout << "]";
}