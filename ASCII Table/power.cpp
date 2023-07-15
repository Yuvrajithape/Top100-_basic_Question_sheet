// Power of number 
#include<iostream>
using namespace std; 
// method 2 : recursive way 
int power(int a , int b)
{
    // base case 
    if( b == 0 )
        return 1 ;
    if( b == 1 )
       return a ;
    
    int ans = power(a , b/2);

    if(b%2 == 0)
    {
      return ans * ans ;  // return likhna mandatory aahe 
    }
    else
    {
      return a * ans * ans ;  // return likhna mandatory aahe 
    }
    
}
// method 3 : recursion  Best approach 
int poww(int a , int b)
{
    if(b>0)
       return (poww(a , b-1) * a);
    else
       return 1 ;
}
int main()
{
    int n1,n2;
    cout << " Enter a number : ";
    cin >> n1 ;
    cout << " Enter a power : ";
    cin >> n2 ;
    

    // Method 1 : iterative way 
    // int ans = 1;
    // for(int i = 0 ; i < n2 ; i++)
    // {  
    //     ans*=n1;

    // }
    cout << n1 << " power of " << n2 << " is : " << poww(n1 ,n2) << endl ;

  
}