// Array : array is linear data structure to stored similar types of data items in contigious memory location 
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
 //#include<limits.h>  // for adding function min and max we need add limits.h libarary 
using namespace std;
int ans = INT_MIN ;
int ans2 = INT_MAX ;
// find largest element using recursion method 
int largestNo(int arr[] , int n , int index)
{
     // base case 
     if(index == n)
         return 0 ;
      if(ans <= arr[index])
          ans = arr[index] ;
      largestNo(arr , n , index + 1) ;
      return ans ;
}
int smallstNo(int arr[] , int n , int index)
{
     // base case 
     if(index == n)
         return 0 ;
      if(ans2 >= arr[index])
          ans2 = arr[index] ;
      smallstNo(arr , n , index + 1) ;
      return ans2 ;
}
int maximum(int arr[] , int n)
{
    if(n==1)
        return arr[0] ;
    return max(arr[n-1] , maximum(arr , n-1));
}
int main()
{
    int arr[] = {11,5,4,56,7,1,8};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
    int ans = largestNo(arr,n,0) ;

     cout << " largest element is : " << ans ;

    int a = maximum(arr,n) ;

     cout << " largest element finding using recursion best way approach : " << a ;

     cout << "\n\n" ;

    int ans2 = smallstNo(arr,n,0) ;

     cout << " smallest  element is : " << ans2 ;
    

}