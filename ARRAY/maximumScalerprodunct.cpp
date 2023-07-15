// Find Maximum scaler product of two vector 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 6, 3, 7} ;
    int n  = sizeof(arr) / sizeof(arr[0]) ;
    int brr[] = {10, 7, 45, 3, 7};
    int m = sizeof(brr) / sizeof(brr[0]) ;

    // for sorting array we use selection sort 

    for(int i = 0 ; i < n ; i++)
    {
        int min_index = i ;
        for(int j = i+1 ; j < n ; j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index = j ;
            }
        }
        swap(arr[min_index] , arr[i]);
    }
  
    // for sorting 2 nd array we use insertion sort 
    for(int i = 1 ; i < m ;i++)
    {
        int temp = brr[i] ;
        int j = i - 1 ;
        while(j >= 0 && temp < brr[j])
        {
            brr[j+1] = brr[j] ;
            j--;
        }
        brr[j+1] = temp ;
    }
   
    int ans = 0 ;
   for(int i = 0 ; i < n ; i++)
   {
    ans += (arr[i] * brr[i]) ;
   }
    cout << " maximum scaler of two vector is : " << ans << endl;
    

}