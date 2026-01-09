# include<iostream>
# include<unordered_set>
# include<vector>
using namespace std;
int main(){
    vector<int>nums={100,4,200,1,3,2};
    int n=nums.size();
    unordered_set<int>hash(nums.begin(),nums.end());
    int index=0,x=1;
        
    if(hash.size()==0){
        return 0;
    }
    int max_length=1;
    for (auto y : hash){
        if(hash.count(y-1)==0){
            int curr=y,length=1;
            while(hash.find(curr+1)!=hash.end()){
                length+=1;
                curr++;
                max_length=max(max_length,length);
            }
        }
    }
    cout<<max_length<<endl;
}