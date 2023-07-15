// Strong number is number in which sum of factorial of individual digit of number is equal to number itself 
#include<iostream>
using namespace std;
// Method 2 : recursive method 
int fact(int n)
{
    if(n==0)
       return  1 ;
    int ans = n * fact(n-1);
    return ans ;
}
int main()
{
    int n ;
    cout << " Enter a number : " ;
    cin >> n; 
    
    int sum = 0 ;
    int num = n ;
    while(n)
    {
        int digit = n % 10 ;
        sum += fact(digit);
        n /= 10 ;
    }
    // Method 1 : iterative method 
    
    // while(n)
    // { 
    //     int digit = n % 10 ;
    //     int fact = 1 ;
    //     for ( int i = 1 ; i <= digit ; i++)
    //     {
    //         fact*=i ;
    //     }
    //    sum += fact ;
    //    n /=10 ; 
    // }
     
     if ( sum == num )
     {
        cout << num << " is strong numbere " << endl; 
     }
     else
     {
        cout << num << " is  Not  strong numbere " << endl; 
     }
     
}