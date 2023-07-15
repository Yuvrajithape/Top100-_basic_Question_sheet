// Find maximum product of subarray 
#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 10, -20, -30, 0, 70, -80, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = 0 ;
    int product = 1 ;

    for(int i = 0 ; i < n ; i++)
    {    
        if(arr[i] == 0)
        {
            product = 1 ;
            continue; 
        }
        product = product * arr[i] ;
        ans = max(ans , product) ;
    }

    cout << " Maximum produnt of sub array is  : " << ans << endl;

}