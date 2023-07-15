// Remove Duplicate element in an array 
#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[] , int n )
{
    if(n==0)
         return n ;
    if(n==1)
       return n ;

    int j = 0 ; 
    for(int i = 0 ; i < n - 1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            arr[j++] = arr[i] ;
        }
    }
    arr[j++] = arr[n-1] ;
    return j ;
}
int main()
{
    int arr[] = {11,2,2,9,3,3,3} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // Method 1 : use another index 
    // int size = duplicate(arr , n);
    // for(int i = 0 ; i < size ; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // Method 2 : SET 

    set<int> s;
    for(int i = 0 ; i < n ; i++)
    {
        s.insert(arr[i]);
    }
    int j = 0 ;
    for(auto i : s)
    {
        arr[j++] =  i; 
    }
    for(int i = 0 ; i < j ; i++)
    {
        cout << arr[i] << "  " ;
    }
}