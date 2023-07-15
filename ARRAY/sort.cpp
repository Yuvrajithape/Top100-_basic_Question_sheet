// Sort given array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5,8,6,7,4,52,1,36,9,15,4,5};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // bubble sort 
    // for(int i = 0 ; i < n ;i++)
    // {
    //     for(int j = 0 ; j < n - i - 1 ; j++)
    //     {
    //         if(arr[j] > arr[j+1])
    //             swap(arr[j] , arr[j+1]);
    //     }
    // }
    
    // // insertion sort 

    for(int i = 1 ; i < n ; i++)
    {
        int temp = arr[i] ;
        int j = i- 1 ;
        while( j >= 0  && temp < arr[j])
        {
              arr[j+1] = arr[j];
              j -- ;
        }
        arr[j+1] = temp ;
    }

    // Selection sort 
    // for(int i = 0 ; i < n -1 ; i++)
    // {   int minIndex = i ;
    //      for(int j = i+1; j < n ; j++)
    //      {
    //              if(arr[j] > arr[minIndex])
    //                      minIndex = j ;
    //      }
    //      swap(arr[i] ,arr[minIndex]) ;
    // }



      sort(arr , arr+n );
    cout << " Array in Decending order : " << endl;
    for(int i = 0 ; i < n ;i++)
    {
        cout << arr[i] << "  " ;
    }
}