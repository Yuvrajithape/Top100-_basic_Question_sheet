// Kadane's Algorithms 
// The Subarray with negative sum can't carray
// we carray subarray till it gives positive sum 
// It is usually use to find Maximum  sum  of subarray also print the maximum sum of subarray 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // Kadane's Algorithm
    int start , end , s ;
    int sum = 0 ; 
    int maxi = INT_MIN;
    for(int i = 0 ; i < n; i++)
    {  
         if(sum == 0){
           s = i ;
        }
        
        sum += arr[i] ;
        if(sum > maxi)
        {     
            start = s ;
            end = i ;
             maxi = sum ;
          
        }
        if(sum < 0)
           sum = 0 ;
        
    }

    cout << " \n Maximum sum of subarray is : " << maxi << endl;
    for(int i = start ; i <= end ; i++)
    {
        cout << arr[i] << "  " ;
    }

    cout << " Coding " << endl;

    

}
