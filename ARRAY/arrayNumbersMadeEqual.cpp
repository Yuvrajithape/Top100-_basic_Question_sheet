// Determine can all numbers of array made equal 
#include<iostream>
using namespace std;
bool made_equal(int arr[] , int n)
{
    for(int i = 0 ; i < n; i++)
    {
        while(arr[i]%2 == 0)
              arr[i]/=2 ;
        while(arr[i]%3 == 0)
              arr[i]/= 3;
        
        if(arr[i] != arr[0])
             return 0 ;
    } 
    return 1 ; 
}
int main()
{
    int arr[] = {50,100,20};
    int n = sizeof(arr) / sizeof(arr[0]) ;

    if(made_equal(arr , n))
    {
        cout << " All Numbers of array Possible to made equal " << endl;
    }
    else
    {
        cout << " All Numbers of araay are NOT Possible to made equal " << endl;
    }
    
}