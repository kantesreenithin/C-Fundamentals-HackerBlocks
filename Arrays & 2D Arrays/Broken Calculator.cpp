/*Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?

Input Format
a single lined integer N

Constraints
1 < = N < = 500

Output Format
Print the factorial of N

Sample Input
5
Sample Output
120
Explanation
for factorial of 5 we have 5 x 4 x 3 x 2 x 1 = 120*/
//code:
#include<iostream> 
using namespace std; 
#define MAX 1000       
int multiply(int x, int res[], int res_size); 
void factorial(int n) 
{ 
    int res[MAX];
    res[0] = 1; 
    int res_size = 1; 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    //cout << "Factorial of given number is \n";      
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  
  
    
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
          
        res[i] = prod % 10;   
  
       
        carry  = prod/10;     
    } 
  
    
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 
  

int main() 
{  int h;
   cin>>h;
   
    factorial(h); 
    return 0; 
} 
