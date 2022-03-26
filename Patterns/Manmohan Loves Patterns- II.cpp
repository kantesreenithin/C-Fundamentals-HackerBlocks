/*Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

Input Format
Single integer N denoting number of lines of the pattern.

Constraints
N<=1000

Output Format
Pattern.

Sample Input
5
Sample Output
1
11
202
3003
40004
Explanation
If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.*/
//code:
#include <iostream>
using namespace std;

int main()
{
    int i, j,x = -1;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (x < 1)
        {
            for (j = 1; j <= i; j++)
                cout <<"1";
        }
        else
        {
           for (j = 1; j <= i; j++)
           {
               if(j==1 || j==i)     
                cout << i-1;     
               else
                cout << "0";     
           }
        }
        cout << endl;
        x++;
    }
    return 0;
}
