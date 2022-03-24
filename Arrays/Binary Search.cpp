#include <iostream>
using namespace std;
int binary_search(int a[],int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key to search: "<<endl;
    cin>>key;
    cout<<"Element found at: ";
    cout<<binary_search(a,n,key);
}
