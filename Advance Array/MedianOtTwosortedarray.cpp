// Median Of two sorted array 
#include<iostream>
using namespace std;
int main()
{
     int arr[] = {1 , 12 , 15 , 26 , 38 };
     int n  = sizeof(arr) / sizeof(arr[0]);
     int brr[] = {2 , 13 , 17 , 30 ,45};
     int m = sizeof(brr) / sizeof(brr[0]);


    // Approach 1 : Brute force 
    // Space complexiety O(N+M)  and Time Complexiety O(N)
     int ans[n+m];
     int i = 0 , j = 0 , k = 0 ;
     while( i < n && j < m )
     {
        if(arr[i] > brr[j])
        {
            ans[k++] = brr[j++];
        }
        else
        {
            ans[k++] = arr[i++];
        }
     }
     while(i < n )
     {
        ans[k++] = arr[i++];
     }
     while(j < m )
     {
         ans[k++] = brr[j++];

     }



     int size = sizeof(ans) / sizeof(ans[0]) ;

    //  for(int i = 0 ; i < size ; i++)
    //  {
    //     cout << ans[i] << "  " ;
    //  }
     int median ;
     if(size%2 == 0)
     {
         median = (ans[size/2] + ans[size/2-1]) / 2 ;
     }
     else
     {
        median = ans[size/2];
     }
     cout << " Median of two given array is " << median << endl;


    
}