/*Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units

Input Format
First line contains an integer n. Second line contains n space separated integers representing the elevation map.

Constraints
1 <= N <= 10^6

Output Format
Print a single integer containing the maximum unit of waters she can save.

Sample Input
10
0 2 1 3 0 1 2 1 2 1
Sample Output
5
Explanation
Refer to the image for explanation. Count the number of cells having water in them.*/
//code:
#include<iostream>
using namespace std;
int main() {
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int left[n],right[n];
	left[0]=a[0];
	for(int i=1;i<n;i++){
		left[i]=max(left[i-1],a[i]);
	}
	right[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--){
		right[i]=max(right[i+1],a[i]);
	}
	for(int i=0;i<n;i++){
		sum+=(min(left[i],right[i])-a[i]);
	}
	cout<<sum;

	return 0;
}
