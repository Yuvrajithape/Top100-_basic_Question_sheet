#include<iostream>
using namespace std;
// To find prime by using recursion method 
bool checkprime(int n , int i)
{
    if( n < 2)
       return false;
   
    if(n == i)
        return true;
        
    if(n%i == 0)
       return false ;

    return checkprime(n , i+1);
}
int main()
{
    int n;
    cout << " Enter a number : ";
    cin>>n ;
    // int a = 0 ;
    // for(int i = 2 ;i <=  ( n/2) ; i++)
    // {
    //     if( n % i == 0 )
    //     {
    //          a = 1 ;
    //     }
    // }
     
     bool a = checkprime(n , 2);

    if( a )
    {
        cout << n << " is prime number "<<endl;
    }
    else
    {
        cout << n << " it is not prime number  "<<endl;
    }
    
}