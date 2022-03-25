#include <iostream>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){ // always perform upto before last element because last element will be sorted 
        //loop for the unsorted array
        int min_index=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);//swap the i th index and min index elements 
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"elements before sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    selection_sort(a,n);
    cout<<"\nelements after sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
/*example
0 1 2 3 -indexes
4 3 2 1
i=0 min=i
j=0
4<4
3<4 min=1
2<3 min=2
1<2 min=3
swap ith index and min index elements
1 3 2 4
i=1
j=1 min=1
3<3 
2<3 min=2
2<4
1 2 3 4
i=2
j=2 min=2
3<3
3<4 min=2
1 2 3 4
*/
