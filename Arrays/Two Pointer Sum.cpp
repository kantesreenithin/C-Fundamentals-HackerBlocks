#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    cout<<"enter sorted elements to array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key,current_sum=0;
    cin>>key;
    int i=0,j=n-1;
    while(i<j){
        current_sum=a[i]+a[j];
        if(current_sum>key){
            j--;
        }
        else if(current_sum<key){
            i++;
        }
        else if(current_sum==key){
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }
}
