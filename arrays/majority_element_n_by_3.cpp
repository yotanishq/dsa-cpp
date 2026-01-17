# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
   vector<int>nums = {2,3,1,2,1,1,2,3,1,2,1,2};
   int n=nums.size();
    int a,b,ca=0,cb=0;
    for (int i=0;i<n;i++){
        if (ca>0 && nums[i]==a){
            ca++;
        }
        else if (cb>0 && nums[i]==b){
            cb++;
        }
        else if (ca==0) {
            a=nums[i];
            ca++;
        }
        else if (cb==0){
            b=nums[i];
            cb++;
        } 
        else ca--,cb--;
    }
    int counta=0;
    if(ca!=0){
        for (int i=0;i<n;i++){
            if(nums[i]==a) counta++;
        }
    }
    int countb=0;
    if(cb!=0){
        for (int i=0;i<n;i++){
            if(nums[i]==b) countb++;
        }
    }
    vector<int>result;
    if(counta>n/3) result.push_back(a);
    if(countb>n/3) result.push_back(b);
    cout<<"[";
    for (int i=0;i<result.size();i++){
        cout<<result[i];
        if (i<result.size()-1) cout<<",";
    }
    cout<<"]"<<endl;
}