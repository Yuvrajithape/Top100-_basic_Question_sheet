#include<iostream>
using namespace std;
// Method 1 : recursive method 
int fib(int n)
{
    if(n==1)
       return 0 ;
    if(n==2)
       return 1 ;
    int ans = fib(n-1) + fib(n-2);
}
int main()
{
    int n ;
    cout << " Enter a number that you want fibonacci term : ";
    cin >> n ;
     
     cout << n << " fibonacci term is given as : " << endl; 
    // for(int i = 1 ; i<=n ;i++)
    // {
    //     cout << fib(i) << " " ;
    // }

    // Method 2 : iterative way 
    int f1 = 0 , f2 = 1 ;
    int f3 ;
    for(int i = 1 ; i <= n ; i++)
    {
        cout << f1 <<" " ; 
        f3 = f1 + f2 ;
        f1 = f2 ;
        f2 = f3 ;
    }

}