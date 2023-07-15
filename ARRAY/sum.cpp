#include<iostream>
using namespace std;
int sum(int arr[] , int n)
{
    if(n == 0 )
        return 0 ;
    int summ = 0 ;
    return summ = arr[n-1] + sum(arr , n-1) ;
}
int main()
{
    // to fing sum of array 
    int arr[] = {5,4,2,3,6,1,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int summm = sum(arr , n);
    // for(int i = 0 ; i<n ;i++)
    // {
    //     sum += arr[i];
    // }
    
    cout << " sum of array is : " << summm ;
    
    
}