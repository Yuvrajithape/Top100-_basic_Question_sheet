#include<iostream>
using namespace std;
// method recursion method 
int reverseNo(int n  , int rev)
{
    // base case 
    if(n==0) 
       return rev ;
    
    rev = rev*10 + (n%10) ;
    reverseNo(n/10 , rev);
}
int main()
{
    int n ;
    cout << " Enter a number : ";
    cin >> n ;
    int a = n ;
     
     // Method 1 : iterative  method 
    int revNo = reverseNo(n , 0);
    // while(n)
    // {
    //     reverseNo = (n%10) + (reverseNo*10) ;
    //     n /= 10 ;
    // }


    
    if(a==revNo)

    {
        cout << a << " is palindrome number " << endl;
    }
    else
    {
        cout << a << " is not palindrome number " << endl;
    }
    

    
}