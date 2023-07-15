#include<iostream>
#include<math.h>
using namespace std;
int order(int n)
{
    int len = 0 ;
    while(n)
    {
        len++;
        n /= 10 ;
    }
    return len ;
}

bool isarmstrong(int n , int len)
{
    int sum = 0 ;
    int ans = n ;

    while(n)
    {
        int digit = n % 10 ;
        sum = sum + pow(digit , len);
        n /= 10 ;
    }

    return ans==sum ;
}
int main()
{
   int n1 , n2 ;
   cout << " Enter a first number of your range to finding armstrong number : ";
   cin >> n1 ;
   cout << " Enter a second number of your range to finding a armstrong number between them : " ;
   cin >> n2 ;

   for(int i = n1 ; i <= n2 ; i++)
   {
        if( isarmstrong(i,order(i))){
            cout << i <<" " ;
        }
   }

cout << " \n\n\n All Good ! " << endl<< endl<< endl<< endl<< endl;
   

}