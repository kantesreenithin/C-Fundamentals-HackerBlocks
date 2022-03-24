#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
    int largest=INT_MIN;
    int smallest=INT_MAX;
	for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
 		if(a[i]<smallest){
            smallest=a[i];
        }
	}
    cout<<"Maximum and Minimum element in array :"<<largest<<" "<<smallest;
	return 0;
}


/*
Using inbuilt functions
#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
    int largest=INT_MIN;
    int smallest=INT_MAX;
	for(int i=0;i<n;i++){
        smallest=min(smallest,a[i]);
        largest=max(largest,a[i]);
	}
    cout<<"Maximum and Minimum element in array :"<<largest<<" "<<smallest;
	return 0;
}*/





