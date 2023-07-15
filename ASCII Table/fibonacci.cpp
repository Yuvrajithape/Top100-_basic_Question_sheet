// fibonacci term 
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==1)
      return 0 ;
    if(n==2)
       return 1 ;
     cout << n << endl;
    int ans = fib(n-1) + fib(n-2) ;
   // return ans ;
}
int main()
{
    int n ;
    cout << " Enter a digit " ;
    cin >> n ;

    // Method 1 : iterative method 
    // int f1 = 0 , f2 = 1  , f3;
    
    // int nth = 0 ;
    // for(int i = 0 ; i<n ; i++)
    // {
    //      nth = f1 ;
    //        f3 = f1 + f2 ;
    //        f1 = f2 ;
    //        f2 = f3 ; 
    // }
    

    cout <<  n << " term of fibonacci series is " << fib(n)<< endl;

    
}