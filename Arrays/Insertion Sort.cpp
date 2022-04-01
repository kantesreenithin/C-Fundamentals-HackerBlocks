#include <iostream>
using namespace std;
void insertion_sort(int a[],int n){
    for(int i=1;i<=n-1;i++){ //do iteration up to n-1 times
        int key=a[i];
        //place the current element in the right position in sorted array
        int j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"element before sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\nelements after sorting: "<<endl;
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
