// Armstrong Number : A number  whose  sum of individual digit to the power of order is equal to that number then we can say it is armstrong number 

#include<iostream>
#include<math.h>
using namespace std;
// int pow(int digit , int len)
// {
//     int sum = 1 ;
//     for(int i = 0 ; i<len ; i++)
//     {
//         sum *=digit ;
//     }
//     return sum ;
// }
int main()
{
    int n ; 
    cout << " Enter number : " ;
    cin >> n ;
    int ans = n;
    int  a = n ;

    int len = 0 ;
    while (n)
    {  len++;
       n/=10;
    }
    int sum = 0;
    int digit;
    cout << len << endl;
    while(ans)
    {
       digit = ans % 10 ;

        sum = sum + pow(digit ,len);
        cout << " power is : " << pow(digit ,len)<<endl;
        cout << sum << endl;
      
        ans /= 10;

  
    }
    cout << " sum is " << sum << endl ;
    if(sum == a)
    {
        cout << a << " Armstrong number " << endl;
    }
    else
    {
        cout << a << " is not armstrong number " << endl ;
    }
    

    // Code is write some error occur in our system 

}