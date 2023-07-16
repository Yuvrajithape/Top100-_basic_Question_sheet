// Green text color show that this is untacraacked file  This the  Good feature of VS code 
// Array consist of 0 , 1 , 2 element in unsorted way our task is sort the array element without using sort algorithms 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {0,1,2,0,1};
  int n = sizeof(arr) / sizeof(arr[0]) ;

  // Optimal Approach 
  int low = 0 ;
  int mid = 0 ;
  int high = n - 1;
  while(mid <= high)
  {
    if(arr[mid] == 0 )
    {
        swap(arr[mid++] , arr[low++]);
    }
    else if ( arr[mid] == 1)mid++;
    else{
        swap(arr[mid] , arr[high--]);
    }
    // No increment  Mid in else statement suppose mid element is 2 low element is 0 we swap then mid = 0 low = 2 if we increment mid so 0 position is inaccurate so that reasons no increse mid  .    
  }
  for(int i = 0 ; i < n ;i++)
  {
    cout << arr[i] << "  " ; 
  }
   
  // Approach 1 :
    // vector<int>ans;
    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     for(int j = 0 ; j < n; j++)
    //     {
    //         if(arr[j] == i)
    //         {
    //             ans.push_back(i);
    //         }
    //     }
    // }
    // cout << " Sorted vector is : " << endl;
    // for(int i = 0 ; i < ans.size() ; i++)
    // {
    //     cout << ans[i] << "  " ;
    // }

    // Approach 2 : using map we find no of frequecy of particular 
    // map<int , int > mp ;
    // for(auto i : arr) {mp[i]++;}
    // int j = 0 ;
    // for(auto k : mp)
    // {
    //     int  a = k.second ;
    //     while(a--)
    //     {
    //         arr[j++] = k.first ;
    //     }
    // }
    // for(int i = 0 ; i < n ; i++)
    // {
    //     cout << arr[i] << "  " ;
    // }
  
//    // Approach 3 : Count approach  is better approach : O(N) + O(N)
//    int ZeroCount =  0 ;
//    int OneCount = 0 ;
//    int TwoCount = 0 ;
//    for(int i = 0 ; i < n ; i++)
//    {
         
//         if(arr[i] == 0)
//             ZeroCount+=1;
//         else if(arr[i] == 1)
//             OneCount+=1;
//         else
//            TwoCount+=1;
//    }
//    int i = 0 ;
//    while(ZeroCount--)
//    {
//        arr[i++] = 0 ;
//    }
//     while(OneCount--)
//    {
//        arr[i++] = 1 ;
//    }
//     while(TwoCount--)
//    {
//        arr[i++] = 2 ;
//    }

//    for(int i = 0 ; i < n ; i++)
//     {
//         cout << arr[i] << "  " ;
//     }
} 