#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int index(int *arr , int n)
{
    if(n==1)
        return arr[0];
    else
    {
        return min(arr[n-1] ,index(arr ,  n-1) );
    }
    
}

int  main()
{
   int arr[] = {1,2,56,54,6,69};
   
   int n = sizeof(arr) / sizeof(arr[0]) ;
   string s = "Yuvraj" ;
   s[0] = 'M' ;
   cout << s << endl;;
   cout << s[0] << endl;

}