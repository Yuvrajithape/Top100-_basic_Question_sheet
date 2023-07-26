// Rearrange the array in alternative positive and negative items with O(1) extra space 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,-5,6,9,-5,3,-3,8};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    vector<int>pos;
    vector<int>neg;
    // It gives time Complexiety O(N) 
    // Space Complexiety O(N)
    for(int i = 0 ; i < n  ; i++)
    {
        if(arr[i] > 0 )
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }  
    }
    int a = pos.size();
    int b = neg.size();
    if(a > b )
    {
        for(int i = 0 ; i < b ; i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = b*2;
        for(int i = b ; i < a ;i++)
        {
            arr[index] = pos[i] ;
            index++;
        }
    }
    else
    {
        
        for(int i = 0 ; i < a ; i++)
        {
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }
        int index = a*2;
        for(int i = a ; i < b ;i++)
        {
            arr[index] = neg[i] ;
            index++;
        }
    }

    cout << " alternating array is : " << endl;
    for(int i = 0 ; i < n ;i++)
    {
        cout << arr[i] << "  " ;
    }
    

    

}