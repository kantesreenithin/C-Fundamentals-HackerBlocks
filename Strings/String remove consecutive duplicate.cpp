#include <bits/stdc++.h>
using namespace std;
void remove_duplicate(char a[]){
    int l=strlen(a);
    if(l==0 || l==1){
        return;
    }
    int prev=0;
    for(int next=1;next<l;next++){
        if(a[prev]!=a[next]){
            prev++;
            a[prev]=a[next];
        }
    }
    a[prev+1]='\0';
    return;
}
int main() {
    char a[1000];
    cin.getline(a,1000);
    remove_duplicate(a);
    cout<<a;
}
