# include <iostream>
# include <string>
using namespace std;
int main (){
    string s = "cbaebabacd", p = "abcc";
    int n=s.size();
    int m=p.size();
    if(m>n){
        cout<<"NOT POSSIBLE";
        return 0;
    }
    vector<int> index;
    int arr[26]={0};
    for(int i = 0;i<p.size();i++){
        arr[p[i]-'a']++;
    }
    int l=0,r=m-1;
    int arr2[26]={0};
        for(int i=l;i<=r;i++){
            arr2[s[i]-'a']++;
        }
    while(r<n){
        if(equal(arr,arr+26,arr2)) index.push_back(l);
        arr2[s[l]-'a']--;
        l++,r++;
        if(r<n) arr2[s[r]-'a']++;
    }
    cout<<"[";
    for (int i=0;i<index.size();i++){
        cout<<index[i];
        if (i<index.size()-1) cout<<",";
    }
    cout<<"]"<<endl;
    return 0;
}
    