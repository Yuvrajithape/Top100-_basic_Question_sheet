// Find repeting element in an array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50 , 10};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    // Method 1 : Use for loops 
    int visited[n];
    for(int i = 0 ; i < n ; i++)
    {
         int count = 1 ;
        if(visited[i] != 1)
        {
            visited[i] = 1 ;
            for(int j = i+1 ; j < n ; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1 ;
                }
            }
            if(count >= 2)
            {
                cout << " Repeted element " <<  arr[i] << endl;
            }
        }
    }

    // Method 2 : use unordermap 
    unordered_map<int , int > mp;
    for(auto i : arr) {mp[i]++;}
    for(auto it :  mp)
    {
        if(it.second >= 2 )
        {
            cout << " Repeted element : " << it.first << endl;
        }
    }

}