// Find equlibrium index : The index in which sum of element of left side of that index is equal to sum of element of right side of that index .

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5,6,-2,-6,2};
    int n = sizeof(arr) / sizeof(arr[0]) ;
  
    for(int i = 0 ; i < n ; i++)
    {      int add = 0 ;
           int ans = 0 ;
        for(int j = 0 ; j < i ; j++){ add+=arr[j];}
        for(int k = i+1 ; k < n ; k++){ans += arr[k];}

     
        if(add == ans )
        {
            cout << " first Equlibrium index is : " << i << endl;
        }
    }
 }