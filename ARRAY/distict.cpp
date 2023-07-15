// Distinct element in an array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,10,20,30,30,20,10,20,30,10 , 55 };
    int n = sizeof(arr) / sizeof(arr[0]) ;
    
    // Method 1 : use HashMap
    // unordered_map<int , int > mp ;
    // for(auto i :  arr)
    // {
    //     mp[i]++;
    // }
    // int result = INT_MAX ;
    // for(auto it : mp)
    // {
    //     if(it.second == 1)
    //     {
    //         result = min(result , it.first);   
    //     }
    // }

    

    // Method 2 : Use Two loops 
    int isvisited[n] ;
     int result = INT_MAX ;
     int counttt  = 0 ;
    for(int i = 0 ; i < n ; i++)
    {  
        if(isvisited[i] != 1)
        {
            isvisited[i] = 1 ;
              
            for(int j = i + 1 ; j < n ;  j++)
            {
                  if(arr[i] == arr[j])
                  {
                   
                    isvisited[j] = 1 ;
                  }
            }
          //  cout << arr[i] << " : " << count << endl;
          counttt ++ ;
        }
        
        
    }
    cout << " distinct element is an given array ia : " << counttt  << endl;

  
}