/*Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.*/
//code:
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[1000];
	cin>>s;
	char freq[1000]={0};
	char result;
	int maxfrequency=-1;
	for(int i=0;s[i]!='\0';i++){
		freq[s[i]]++;
	}
	for(int i=0;s[i]!='\0';i++){
		if(maxfrequency<freq[s[i]]){
			maxfrequency=freq[s[i]];
			result=s[i];
		}
	}
	cout<<result;
}
