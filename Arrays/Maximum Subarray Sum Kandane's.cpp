//maximum sum of subarray using kadane's algo
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int current_sum=0;
    int maximum_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=a[i];
        if(current_sum<0){
            current_sum=0;
        }
        maximum_sum=max(current_sum,maximum_sum);
    }
    cout<<"Maximum sum :"<<maximum_sum;
}
