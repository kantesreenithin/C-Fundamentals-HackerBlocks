/*You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is bitonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.

Input Format
First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array and next line contains n space separated integers.

Constraints
1<=t<=100 1<=n<=1000000

Output Format
Print the maximum length.

Sample Input
2
6
12 4 78 90 45 23
4
40 30 20 10
Sample Output
5
4
Explanation
ForMaximum length = 4, 78, 90, 45, 23*/
//code:
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--){
	cin>>n;
        int arr[n];
        int inc[n];
        int dec[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		inc[0]=1;dec[n-1]=1;
		// finding range till its inc.
		for(int i=1;i<n;i++){
			if(arr[i]>=arr[i-1]){
				inc[i]=1+inc[i-1];
			}
            else
                inc[i]=1;  
		}
		// finding range till its dec.
		for(int i=n-2;i>=0;i--){
			if(arr[i]>=arr[i+1]){
				dec[i]=1+dec[i+1];
			}
            else
                dec[i]=1; 
		}  
		int maxc=inc[0]+dec[0]-1;
		for(int i=1;i<n;i++){
			maxc=max(inc[i]+dec[i]-1,maxc);
		}
		cout<<maxc<<"\n";
	}
	return 0;
}
