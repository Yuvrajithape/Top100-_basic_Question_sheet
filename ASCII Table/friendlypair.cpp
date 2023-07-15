// Friendly pair :  num1 and num2 said to be friendly pair if sum of divisors of num1 divide by num1  is equal to the sum of divisors of num2 divide by num2 .
#include<iostream>
using namespace std;
int ans ; // global variable 
// Method 1 : recurssion way 
int sumOfdiv(int n , int i)
{
    if(i > (n/2))
       return 0 ;
    if( n % i == 0)
    {
         return ans = i + sumOfdiv(n , i + 1);
    }
    else
    {
        sumOfdiv(n , i+1);
    }
    
}
int main()
{
       int num1 , num2 ;
       cout << " Enter num1 : " ;
       cin >> num1 ;
       cout << endl <<" Enter num2 : ";
       cin >> num2 ;

       if (( sumOfdiv(num1 , 1) / num1)  == (sumOfdiv(num2 , 1) / num2))
       {
        cout << num1 << "and " << num2 << " are friendly pair " << endl;
       }
       else
       {
       cout << num1 << " and " << num2 << " are Not friendly pair " << endl;
       }
       
       
}