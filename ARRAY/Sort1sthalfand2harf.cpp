// Sort 1 st half in Ascending order and 2 nd half in decending order 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[] = {5,4,2,1,6,86,5,6,5,15,6,3,4,9,8,51,2,5,7,5};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    sort(arr , arr+n/2);
    sort(arr+n/2, arr+n , greater<int>());

    // applying bubble sort 

    // for(int i = 0 ; i<n ;i++)
    // {
    //     for(int j = 0 ; j<n/2 ; j++)
    //     {
    //         if(arr[j] > arr[j+1])
    //              swap(arr[j] , arr[j+1]) ;
    //     }
        
    //     // for 2nd half in decending order 
    //     for(int k = n / 2 ; k < n -1 ; k++)
    //     {
    //         if(arr[k] < arr[k+1])
    //                  swap(arr[k] , arr[k+1]) ;
    //     }
    // }


    // Applying using insertion sort 
    

    cout << " Sorted array : " << endl;
    for(int i = 0 ; i < n ;i++)
    {
        cout << arr[i] << "  " ;
    }
}