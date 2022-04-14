#include <bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()>b.length();
}
int main() {
    int n;
    cin>>n;
    string a;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
