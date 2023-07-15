//Harshad Number : is a number is which sum of its digit is completly divisible by itself is called harshad number 
#include<iostream>
using namespace std;
// Method 2 : recursive way 
int sum(int n)
{
    if(n==0)
       return 0 ;
    int ans = (n%10) + sum(n/10);
    return ans ;
}
int main()
{
    int n ;
    cout << "Enter a number : ";
    cin >> n ;
    // reference variable : same memory but different variable int &b = n; 
    int num = n ;
    // int sum = 0 ;
    // while(n)
    // {
    //     sum += (n%10) ;
    //     n /= 10 ;
    // }
    // cout << " value of num is : " << num << endl;
    if(num % sum(n) == 0 )
    {
        cout << num << " is harshad number ";
    }
    else
    {
        cout << num << " is not harshad number " ;
    }
    
}