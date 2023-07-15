// Factors of the number 
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << " Enter a number : " ;
    cin >> n ;
    
    cout << " factors of "<< n << " is given as : "<<endl;
    int  a = 0 ; 
    for(int i = 2 ; i <= n/2 ; i++)
    {
        if( n % i == 0)
        {   a = 1 ;
            cout << i << " ";
        }
    }
    if(a == 0 )
    {
        cout << " No factors because of " << n << " is prime number " << endl;
    }
}