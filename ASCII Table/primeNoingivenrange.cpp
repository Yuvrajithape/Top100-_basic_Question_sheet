
#include<iostream>
using namespace std;
int main()
{
    // Primes no in given range 
    // Method 1 : iterative method 
    int n1 , n2 ;
    cout << " Enter first number : ";
    cin >> n1 ;
    cout << " Enter second Number of your range to find prime number between them ? : "<<endl;
    cin >> n2 ;

    if(n2 < 2)
    {
        cout << " You have entered wrong range  " << endl;
    }


    cout << " Primes number between range " << n1 << " to " << n2 << " is given as : "<<endl;
    for( int i = n1 ; i <= n2 ; i++)
    {   int a = 0 ;
         for(int j = 2 ; j <= (i/2) ; j++){
            if(i%j == 0){
                a = 1 ;
            }
         }

         if(a==0){
            cout << i << " ";
         }
    }
}