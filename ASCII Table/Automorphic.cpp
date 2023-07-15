// Automorphic number : A number whose squres ends with  same digit as number itself 
#include<iostream>
#include<math.h>
using namespace std;
bool check(long long  n )
{ 
     long long int a = n*n ;
    while(a && n)
    {
        long  digit1 = n % 10 ;
        long digit2 =  a % 10 ;
        if(digit1 != digit2)
        {
            return false ;
            break ;
        } 
        a/=10 ;
        n/=10;
    }
    return true ;
}
int main()
{
    long long n ;
    cout << " Enter a number : " ;
    cin >> n ;
     
     long long  c = n*n ;
    cout << " number : " << c << endl;

    if(check(n))
    {
        cout << n << " Automorphic number " ;
    }
    else
    {
        cout << n << " is not automorphic number " ;
    }
    

    cout << " Yes  i did it ! " << endl ;


} 