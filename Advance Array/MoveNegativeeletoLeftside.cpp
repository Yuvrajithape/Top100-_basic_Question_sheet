// Move all the negative element of array to left side 
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,-5,6,-4,-9,-2,-4,55,74,12,65,32,12,-12};
    int n = sizeof(arr) / sizeof(arr[0]) ;
   

   // Optimal Approach : using two pointer with O(N) Time Complexiety 
    int i = 0 ;
    int j = 0 ;
    while(j < n)
    {
        if(arr[j] < 0)
           j++;
        else
        {
            swap(arr[i] , arr[j]) ;
            i++ ;
            j++;
        }  
    }
     cout << "\n After moving element : " << endl;
    for(int i = 0 ;i < n; i++)
    {
        cout << arr[i] << "  " ;
    }

}