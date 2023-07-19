// Longest sum of contigious subarray 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // Approach 1 : using two for loops brute force approach 
    
    // int ans = 0 ;
    // for(int i = 0 ; i < n ;i++)
    // {   int sum = 0 ;
    //     for(int j = i ; j < n ;j++)
    //     {
    //         sum+=arr[j];
    //         ans = max(ans , sum);
    //     }
    // }

    

    // kadane's algorithms : O(N) space complexiety O(1)
    // the subarray with negative sum is discarded 
    // we carray subarray till it gives positive sum 
    
    int ansstart = -1 , ansend = -1 ,  start = -1 ;
    int sum = 0 , maxi = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {   
        if(sum == 0 )
        {
             start = i ;
        }
        sum += arr[i]; // carray subarray till it gives positive sum  
         if ( sum > maxi)
         {
            maxi = sum ;
            ansstart = start;
            ansend = i ;
         }
        if(sum < 0)
        {
            sum = 0 ;
        }
        
    }
    cout << " Maximum sum of contigious subarray is given as : " << maxi << endl;

   cout << "\n\n Printing contigious subarray : " << endl;
   for(int i =  ansstart ; i <= ansend ; i++ )
   {
        cout << arr[i] << "  " ;
   }

    // Printing subarray 

}