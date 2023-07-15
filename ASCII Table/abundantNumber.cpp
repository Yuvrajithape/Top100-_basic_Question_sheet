// Abundant Number : abundant number is number in which sum of its positive proper divisors is greater than number itself 
#include<iostream>
using namespace std;
int ans ;
// method 2 : recursion function 
// use recursion function and give proper positive divisors 
int abundant(int n , int i)
{
    if( i > (n/2))
        return 0;
   
    if( n % i == 0)
       return  ans = i + abundant( n , i + 1) ;
    
    else
        abundant( n , i + 1) ;
}
int main()
{
    int num ;
    cout << " Enter a number : " << endl;
    cin >> num ;
     

//      // method 1 : iterative way
//      for(int j = 1 ; j <= num ; j++) 
//      {
//      int sum = 0 ; 
//      int n = j ;
//     for(int i = 1 ; i <= (n/2) ; i++)
//     {
//                if(n%i == 0)
//                {
//                    sum += i ; 
//                }
//     }
//     if(sum > j  )
//     {
//         cout << j << " ";
//     }
//    }
cout << " sum of divisors is : " << abundant(num , 1) << endl ;
if(abundant(num , 1) > num)
{
    cout << num << " is abundant number " << endl ;
}
else
{
    cout << num << " is not abundant number " ;
}

}
