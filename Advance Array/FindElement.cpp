// We are given an array of size n and a number k find all elements that appear more than n/k times 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,1,2,3,5,2,1,4,2,1,3,5,6,2,1,3,2,1,5,5,5,4,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int k = 6 ;
    cout << " Size of array is : " <<n << endl;
   
   // Approach 1 : time complexiety O(Nlogn)
   // space complexiety O(1)
    // sort(arr , arr+n);
    // int count = 1 ;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     if(arr[i] == arr[i+1])
    //     {
    //         count++;
            
    //         if(count > n/k)
    //         {
    //             cout << arr[i] << "  ";
    //             count = 1;
    //         }
    //     }
    //     else
    //     {
    //         count = 1 ;
    //     }
    // }

    // Approach 2 : using unordered map 
    // time complexiety : O(n)
    // space complexiety : O(n)
    map<int,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        mp[arr[i]]++;
    }
    for(auto i : mp)
    {
        cout << i.first << "  : " << i.second << endl;
    }
    for(auto i : mp)
    {
        
        if(i.second > n/k)
        {
            cout << i.first<<"  ";
        }

    }
    // Map stored element accourding sorted order in value .....!


}