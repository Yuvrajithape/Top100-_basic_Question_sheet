// Finding the frequency of element 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,40,10,20,20,30,20,10,30,20,40,40,20};
    int size = sizeof(arr) / sizeof(arr[0]) ;
       
       cout << " Frequency of element : " << endl;
//    int visited[n] ;
//    for(int i = 0 ; i<n ; i++)
//    {
//      if(visited[i] != 1)
//      {   visited[i] = 1 ;
//         int count = 1 ;
//         for(int j = i+1; j < n ; j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 count++;
//                 visited[j] = 1;
//             }
//         }

//         cout << arr[i] << " : " << count << endl;
//      }
//    }

   // Without Extra Space 
//   



    // for (int i = 0; i < size; i++)
    // {
    //     int flag = 0;
    //     int count = 0;

    //     // Counting of any element has to be delayed to its last occurrence
    //     for (int j = i+1; j < size; j++)
    //     {
    //         if (arr[i] == arr[j]){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //         cout << "hello" << endl ;
    //     // The continue keyword is used to end the current iteration 
    //     // in a for loop (or a while loop), and continues to the next iteration
    //     if (flag == 1)
    //         continue;
    //     cout << " hi" << endl;
    //     for(int j = 0;j<=i;j++)
    //     {
    //         if(arr[i]==arr[j])
    //             count +=1;
    //     }
        
    //     cout << arr[i] << ": " << count << endl;
    // }


    // Method : 3
    // sort(arr , arr+size);
    // for(int i = 0 ; i < size ; i++)
    // {     int count = 1 ;
    //     while(i<size && arr[i] == arr[i+1])
    //     {
    //         count++ ;
    //         i++ ;
    //     }
    //     cout << arr[i] << " : " << count <<  endl;
    //     cout << " last index " << i << endl;
    // }

    // Method 4 : using unordermap 
    cout << " Array : " << endl;
    for(auto i : arr)
    {
        cout << i << " " ;
    }
    unordered_map<int , int > mp;
    for(int i = 0 ; i < size ; i++)
    {
        mp[arr[i]]++;
    }
    for(auto i : mp)
    {
        cout << i.first << " : " << i.second << endl;
    }
}