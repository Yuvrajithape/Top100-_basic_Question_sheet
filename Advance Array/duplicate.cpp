// Find Duplicate in array of N+1 Integar the elements in an array between (1 , N)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,2,2,5};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
    // Approch 1 : brute force 
    // for(int i = 0 ; i < n ;i++)
    // {
    //     for(int j = i+1 ; j < n ;j++)
    //     {
    //         if(arr[i] == arr[j])
    //               cout << arr[i]<< "  ";
    //     }
    // }

    // // Approach 2 : using maps 
    // unordered_map<int , int > mp ;
    // for(auto i : arr)
    // {
    //     mp[i]++;
    // }
    // for(auto i : mp)
    // {
    //     if(i.second >= 2)
    //            cout << i.first << "  " ;
    // }
}