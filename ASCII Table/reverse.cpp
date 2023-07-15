#include<iostream>
using namespace std;
// Approach 2 : recursive realtion 
int reverse(int n , int rev)
{
    // base case 
    if(n==0)
        return rev ;
    
    rev = (rev*10) + (n%10) ;
    reverse(n/10 , rev);
}
int main()
{
    int n ;
    cout << " Enter a number  : " ;
    cin >> n ;


    // Method 1 : iterative approach 
    // int reverseNO = 0 ;
    // while(n)
    // {
    //     int digit = n%10 ;
    //     reverseNO = digit + (reverseNO*10) ;
    //     n/=10 ;
    // }

    cout << " Reverse Number is : "<<reverse(n , 0) << endl;
}