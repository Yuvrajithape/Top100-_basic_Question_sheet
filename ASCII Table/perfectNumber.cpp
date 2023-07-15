// Perfect Number : perfect Number is number in which sum of proper positive divisors of that number is equal to number itself 

#include<iostream>
using namespace std ;
static int sum = 0 ;
// method 2 : recursive realtion 
int summ(int n , int a)
{   
    if(a <= n/2)
      { 
         if(n % a == 0 )
           sum = sum + a ;
        a++;
        summ(n , a);

      }
    return sum ;
    
}
int main()
{
    int n ;
    cout << " Enter a number : " ;
    cin >> n ;

    int sum = 0 ;
    // Method 1 : iterative way 
    // for(int i = 1 ; i <= n/2 ;  i++)
    // {
    //     if( n % i == 0 )
    //     {  
    //         sum += i ;
    //     }
    // }

    if( summ(n , 1) == n )
    {
        cout << n << " is perfect number "<<endl;
    }
    else
    {
        cout << n << " is Not  perfect number "<<endl;
    }
    

}