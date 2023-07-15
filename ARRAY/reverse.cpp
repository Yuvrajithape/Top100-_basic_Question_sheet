// Reverse array 
#include<iostream>
using namespace std;
void reverse(int arr[] , int n)
{    int s = 0 ;
      int e = n - 1 ;
    while( s <= e )
    {
        swap(arr[s++] , arr[e--]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5} ;
    int n = sizeof(arr) / sizeof(arr[0]) ;
    for(int i = n-1 ; i >= 0 ; i--)
    {
        cout << arr[i] << "  ";
    }

    reverse(arr , n);
    cout << " reverse array is : " << endl; 
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << "  " ;
    }

}