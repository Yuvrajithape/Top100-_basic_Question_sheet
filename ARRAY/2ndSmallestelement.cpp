// Finding the second smallest element in an array 
#include<bits/stdc++.h>
using namespace std;
// using recursion we fing second smallest element 
int sec(int arr[] , int n , int i)
{  int pre ;
    if( n == 1)
        return arr[0] ;
    int ans = min(arr[n] , sec(arr , n , i+1));
}
int main()
{
    int maxi = INT_MAX ;
    int arr[] = {5,4,6,8,6,2,65,9,1,1,56,9,5,6,9};
    int n = sizeof(arr) / sizeof(arr[0]) ;
     
     int second ;
    for(int i = 0 ; i<n ;i++)
    {
         if(maxi >= arr[i] && maxi != arr[i])
         {
            second = maxi ;
            maxi = arr[i] ;
         }
    }

    cout << " first Smallest element of array is : " << maxi << endl;
    cout << " second Smallest element of array is : " << second << endl ;
}