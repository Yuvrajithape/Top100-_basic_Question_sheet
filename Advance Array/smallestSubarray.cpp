// Smallest subarray with sum greater than value in cpp 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  arr[] = {1, 4, 0, 0, 2, 6, 3} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int sum = 6 ;


    // Approach 1 : Time Complexiety O(N^2) with constant space complexiet 
    int sumofarr = 0 ;
    int minlength = INT_MAX ;
    int startIn , endIn ;

    for(int i = 0 ; i < n ; i++)
    {
        sumofarr = arr[i] ;
        if(sumofarr > sum ) 
        {
            minlength = 1 ;
            cout << " Minimum length of subarray is : " << minlength  << " at index " << i ;
            return 0 ;
        }

        for(int j  = i + 1 ; j < n ; j++)
        {
            sumofarr+=arr[j];
            if(sumofarr > sum && minlength > j-i+1)
            { 
                startIn = i ;
                endIn = j ;
                minlength = j-i+1 ;
            }
        }
    }

    cout << " Minimum length of Subarray is : " <<minlength << " At index " << startIn <<" : " <<  endIn << endl;
}