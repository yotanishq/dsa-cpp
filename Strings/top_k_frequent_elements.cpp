// Solves Top K Frequent Elements using bucket sort.
// Time Complexity: O(n), Space Complexity: O(n)
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main (){
    vector<int> nums= {1,1,1,2,2,3};
    int k = 2;
    int n=nums.size();
        unordered_map<int,int>mp;
        int max_freq=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            max_freq=max(max_freq,mp[nums[i]]);
        }
        vector<vector<int>>bucket(max_freq+1);
        for(auto it : mp){
            bucket[it.second].push_back(it.first);
        }
        vector<int>ans;
        int count=0;
        for(int i=bucket.size()-1;i>0;i--){
            if(!bucket[i].empty()){
                for(int j=0;j<bucket[i].size();j++){
                    if(count==k) break;
                    ans.push_back(bucket[i][j]);
                    count++;
                }
            }
            if(count == k) break;
        }
    cout<<"[";
    for (int i=0;i<ans.size();i++){
        cout<<ans[i];
        if (i<ans.size()-1) cout<<",";
    }
    cout<<"]"<<endl;
}