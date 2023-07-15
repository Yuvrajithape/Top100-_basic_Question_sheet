// Finding logest palindrome in an array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int n )
{   int ans = 0 ;
    while(n)
    {
        ans = (n%10) + (ans *10) ;
        n/=10 ;
    }
    return ans ;
}
bool checkpalindrom(int n)
{
        if(n == reverse(n))
             return true;
        else 
            return false;
}
int main()
{
    int arr[] = {5522,6654,6556,9696,2121,4654,76463416,48744,11,655556};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // int ans = 0 ;
    // int result = 0 ;
    // for(int  i = 0 ; i < n ; i++)
    // {
    //     if(arr[i] > ans  && checkpalindrom(arr[i]))
    //     {
    //         ans = arr[i] ;
    //         result = max(result , ans ) ;
    //     }
    // }

    // cout << " Longest Palindrome is an array is : " << result << endl;


    // Method 2 : we Sort array and traversing array from ending ( n )  if palindrom condition is true then we written that element 

    sort(arr , arr+n  , greater<int>()); // array sort decreasing order 
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << "  " ;
    }
    int ans ;
    for(int i = 0 ; i < n ; i++)
    {
        if(checkpalindrom(arr[i]))
        {
            ans = arr[i] ;
            break;
        }
    }
       
       cout << " longest palindrome is : " << ans << endl;


}