// Traverses a matrix diagonally using the invariant i + j.
// Time: O(rows * columns), Space: O(rows * columns)
# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    int m=mat.size();
    int n=mat[0].size();
    int i=0,j=0;
    vector<int> result;
    int sum=0;
    while (sum<=m+n-2){
        vector<int>temp;
        for (int i=0;i<m;i++){
            int j=sum-i;
            if( j>=0&&j<n){
                temp.push_back(mat[i][j]);
            }
        }
        if ( sum%2==0) reverse(temp.begin(),temp.end());
        for(auto it : temp){
            result.push_back(it);
        }
        sum++;
    }
    cout<<"[";
    for (int i=0;i<result.size();i++){
        cout<<result[i];
        if (i<result.size()-1) cout<<",";
    }
    cout<<"]"<<endl;
}