#include<iostream>
using namespace std;
// Method 2 : Recursive method 
int perfectSqure(int n , int i){
    // base case 
    if( i*i  > n )
        return 0 ;
    if(i*i == n )
         return i;
    perfectSqure(n , i+1);
        
}
int main()
{
    int n ;
    cout << " Enter a number : " ;
    cin >> n ;

    // method 1 : iterative method 
    int a = perfectSqure(n,1);
    // for(int i = 1 ; (i*i)<= n ;i++)
    // {
    //     if((i*i )== n)
    //     {
    //       a = i ;
    //     }
    // }
    if(a)
    {
        cout << n << " is perfect squre of " << a << endl;
    }
    else
    {
        cout << n << " is not perfect squre number " << endl ;
    }
    
}