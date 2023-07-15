// count Even and odd element in an arrat 
#include<bits/stdc++.h>
using namespace std;
int counteven(int arr[] , int n )
{    int count = 0 ;
    if(n==0)
       return 0 ;
    if(arr[n-1]%2 == 0)
        count++;
    int ans = count + counteven(arr , n-1); // recaursive relation 
    return ans ;
}
int main()
{
    int arr[] = {1,2,5,4 , 7};
    int n = sizeof(arr) / sizeof(arr[0]) ;
     
    int  evencount = counteven(arr , n);
    int oddcount = n - evencount ;
    cout << " Even count is : " << evencount << endl;
    cout << " Odd count is : " << oddcount << endl;

}