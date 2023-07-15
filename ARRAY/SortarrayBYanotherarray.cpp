// Sort array According to order defined by another array  
#include<bits/stdc++.h>
using namespace std;
void sorted(int arr[] , int brr[] , int n , int m)
{
    // sort arr accourding to order defined by brr array 
    int ans[n];
    int visited[n];
    int k = 0 ;
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
          

                 if(brr[i] == arr[j])
                 {
                    ans[k++] = arr[j]; 
                    arr[j] = -1 ;
                    visited[j] = 1 ;
                 }

            
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] != -1)
        {
            ans[k++] = arr[i] ;
        }
    }
    
    for(int i = 0 ; i < n ;i++)
    {
        cout << ans[i] << "  " ;
    }
}
int main()
{
    int arr []  = {20, 1, 20, 5, 7, 1, 9, 39, 6, 18, 18 } ;
    int brr [] = {20, 1, 18, 39 } ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int m = sizeof(brr) / sizeof(brr[0]) ;
     
     cout << " Array before sorted " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << "  " ;
    }
      cout << endl<< endl;
     sorted(arr , brr , n , m);
     //cout << "/n Array after  sorted " << endl;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     cout << arr[i] << "  " ;
    // }


} 



// I solve this question Partially . need to solve this question perfectly .
// this is  brute force approach 