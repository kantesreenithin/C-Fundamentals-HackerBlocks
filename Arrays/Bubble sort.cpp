#include <iostream>
using namespace std;
void bubble_sort(int a[],int n){
    //n-1 large elements to end here i=iteration we need total n-1 iteration
    for(int i=1;i<=n-1;i++){
        //pair wise swapping in unsorted array
        for(int j=0;j<=n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
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
    bubble_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
