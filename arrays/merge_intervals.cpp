# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), 
        [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });
    vector<vector<int>>merge;
    int pos=0,index=0;
    while(pos<n){
        if(merge.empty()){
            merge.push_back(intervals[pos]);
        }
        else{
            if(merge[index][1]>=intervals[pos][0]){
                merge[index][1]=max(intervals[pos][1],merge[index][1]);
            }
            else{
                merge.push_back(intervals[pos]);
                index++;
            }
        }
        pos++;
    }
    for(int i=0;i<merge.size();i++){
        cout<<"["<<merge[i][0]<<","<<merge[i][1]<<"]"<<"\t";
    }
}