// Finding Non repeting element an array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {40,10,20,30,50,10,20,46};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // Method 1 : use for loops 

    // int visited[n];
    // for(int i = 0 ; i < n ; i++)
    // {    int count = 1 ;
    //     if(visited[i] != 1)
    //     {
    //         visited[i] = 1 ;
    //         for(int j = i+1 ; j < n ; j++)
    //         {
    //             if(arr[i] == arr[j])
    //             {
    //                 count++;
    //                 visited[j] = 1 ;
    //              }
    //         }
    //         if(count == 1 )
    //         {
    //             cout <<"Non repeting element is : " << arr[i] << endl;
    //         }
    //     }
    // }

    // Method 2 : use sorted Technique 
    // we sort using insertion sort 
    for(int i = 1 ; i < n ; i++)
    {
        int temp = arr[i] ;
        int j = i - 1 ;
        while(j >= 0 && arr[j] > temp )
        { 
            arr[j+1] = arr[j] ;
            j--;

        }
        arr[j+1] = temp ;
    }

       // so now array is sorted 
       for(int i = 0 ; i < n;  i++)
       {
        int count = 1 ; 
        for(int j = i + 1 ;j < n ; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                i++;
            }
        }
        if(count == 1)
        {
            cout << " Non repeting element is : " << arr[i] << endl;
        }
       }


       // Method 3 : use unordered Map 
       unordered_map<int , int > mp ;
       for(auto i : arr){mp[i]++;}
       for(auto it : mp)
       {
        if(it.second == 1)
        {
            cout << " NOn repeting element : " << it.first << endl;
        }
       }
}