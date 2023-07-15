#include<iostream>
using namespace std;
// method 2 : using recurssion 
int fact(int n)
{
    if(n==1)
        return 1 ;
    int ans = n * fact(n-1) ;
    
}
int main()
{
     int n ;
     cout << " Enter a number : " ;
     cin >> n ;
    // Method 1 :  iterative way 
    // int fact = 1 ;
    // for(int i = 1 ; i <= n ;i++)
    // {
    //     fact*=i;
    // }
    cout << " factorial of " << n << " is " << fact(n)<< endl;
}