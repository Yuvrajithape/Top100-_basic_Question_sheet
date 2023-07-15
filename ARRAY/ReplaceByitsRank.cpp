// Replace each element of array accourding to its Rank 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = { 100, 2, 70, 12, 90};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int brr[n];
    for(int i = 0 ; i < n ; i++)
    {
        brr[i] = arr[i] ;
    }
    sort(brr , brr+n);
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i] == brr[j])
            {
                arr[i] = j+1;
            }
        }
    }

    cout << " Updated Ranking array is : " << endl;
    for(int i = 0 ; i < n ;i++){
        cout << arr[i] <<"  ";
    }



}