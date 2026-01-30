// Finds a peak element in a 2D matrix using binary search on rows.
// For each candidate row, the maximum element is chosen and compared 
// with its vertical neighbors to decide the search direction.
// Time Complexity: O(m log n), Space Complexity: O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<vector<int>>mat={{70,50,40,30,20},{100,1,2,3,4}};
    int row=mat.size();
    int column=mat[0].size();
    int l=0,r=row-1;
    int index;
    vector<int>ans;
    while(l<r){
        int mid=l+(r-l)/2;
        int max_row=mat[mid][0];
        for(int i=0;i<column;i++){
            if(mat[mid][i]>=max_row){
                max_row=mat[mid][i];
                index =i;
            }
        }
        int bottom = (mid<row-1) ? mat[mid+1][index] : -1;
        if(max_row>bottom) r=mid;
        else l=mid+1;
    }
    index = max_element(mat[l].begin(), mat[l].end()) - mat[l].begin();
    cout<<"{"<<l<<","<<index<<"}"<<endl;
}