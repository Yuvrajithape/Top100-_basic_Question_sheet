// Sum of digit 
#include<iostream>
using namespace std;
//  Method 2 : recursive realtion 
int sumOfdigit(int n)
{   // base case 
    if(n==0) 
       return 0 ;
    int digit = n % 10 ;
    n/=10 ;
    int sum = digit + sumOfdigit(n);

    return sum ;
}
int main()
{
    int n ;
    cout << " Enter a number : "<<endl;
    cin >> n;
     
    //  // Method 1 : Iterative 
    //  int sum = 0 ;
    // while(n)
    // {
    //      int digit = n % 10 ;
    //      sum +=  digit ;
    //      n/=10 ;
    // }

    cout << " sum of given number is : " << sumOfdigit(n) ;
}