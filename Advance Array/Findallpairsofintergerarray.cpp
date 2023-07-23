// Find all Pairs of intergar arrays whose sum is equal to given number return count of that all pairs 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,5,7,-1,-3,9};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int k = 6 ;
    
    // Approach 1 : brute force approach where we are using two for loops 
    
    int count = 0 ;
    for(int i = 0 ; i < n-1 ; i++)
    {  
          for(int j = i+1; j < n ;j++)
        {
            if((arr[j] + arr[i] )== k)
            {
                count++;
            }
        }
    }

  
    cout << " Intergar array pairs is :  " << count << endl; 



//    int left = 0 ; 
//    int right = 0 ;
//    int sum = 0 ;
//    int count = 0 ;
//    while(right < n )
//    {
//      if(sum > k && left <= right)
//      {
//         sum-=arr[left];
//         left++;
//      }
//      sum += arr[right];
//      right++;
//      if(sum == k )
//         count++;
  // }
}