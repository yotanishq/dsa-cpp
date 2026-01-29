// Binary search to locate the possible row, then binary search within that row.
// Time Complexity : O(log m + log n), Space Complexity : O(1)
# include <iostream>
# include <vector>
using namespace std;
int main (){
    vector<vector<int>>matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target;
    cout<<"Enter any no to see if it is in the matrix : ";
    cin>>target;
    int row=matrix.size();
    int column=matrix[0].size();
    int l=0,r=row-1;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(target>=matrix[mid][0]&&target<=matrix[mid][column-1]){
            int l_=0,r_=column-1;
            while(l_<=r_){
                int mid_=l_+(r_-l_)/2;
                if(matrix[mid][mid_]==target){
                    cout<<"YES"<<endl;
                    return 0;
                }
                else if(matrix[mid][mid_]>target) r_=mid_-1;
                else l_=mid_+1;
            }
            break;
        }
        else if (target<matrix[mid][0]) r=mid-1;
        else l=mid+1;
    }
    cout<<"NO"<<endl;
    return 0;
}