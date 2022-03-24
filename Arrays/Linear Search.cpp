#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n],key;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter element to search :"<<endl;
	cin>>key;
	int i;
	for( i=0;i<n;i++){
		if(a[i]==key){
		   cout<<key<<" found in array at index"<<i;
		    break;
        }
	}
	if(i==n){
		cout<<"key not found in array";
	}
	return 0;
}



