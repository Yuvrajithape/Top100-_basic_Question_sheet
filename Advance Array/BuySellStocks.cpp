// Buy or sell stock problemm 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Suppose You sell stocks on i th day for maximum profit you buy stocks on minimum prices form day 1 to (i-1) day 

    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
     

    // Optimal solution : 
    int maxprofit = 0 ;
    int mini = arr[0] ;
    for(int i = 1 ; i < n ; i++)
    {
        
        maxprofit = max(maxprofit , arr[i] - mini);
        mini = min(mini , arr[i]);
    }

    cout << " maximum profit is : " << maxprofit << endl;
   


    // brute force opproach :
    // for(int i = 0 ;i < n -1 ;i++)
    // {
    //     for(int j = i+1 ; j < n ;j++)
    //     {
    //         if(arr[j] > arr[i])
    //         {
    //             maxprofit = max(maxprofit , arr[j]-arr[i]);
    //         }

    //     }
    // }


    // cout << " maximum profit is : " << maxprofit << endl;
    
}