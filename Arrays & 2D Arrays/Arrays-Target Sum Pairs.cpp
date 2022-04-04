/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format
The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.

Constraints
Length of the arrays should be between 1 and 1000.

Output Format
Print all the pairs of numbers which sum to target. Print each pair in increasing order.

Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3
Explanation
Find any pair of elements in the array which has sum equal to target element and print them.*/
//code:
#include<bits/stdc++.h>
using namespace std;
void targetSum(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int sum=0;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else if(sum==target)
        {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
    sort(arr,arr+n);
	targetSum(arr,n,x);
	return 0;
}
