// Find Subarray with sum Zero 
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,54,6,-6,85,1,26};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Brute forces Approach to finding subarray with zero sum
    // time complexiety : O(N^2)...
     int a = -1 , b = -1 ;
    for(int i = 0 ; i < n; i++)
    {
        int sum = 0 ;
        for(int j = i ; j < n ; j++)
        {
            sum += arr[j];
            if(sum == 0 )
            {
                a = i ;
                b = j ;
            }
        }
    }
 cout << " The Subarray with sum zero index is given as :    start index : "<< a << "   End index :    "<< b << endl;
    
}