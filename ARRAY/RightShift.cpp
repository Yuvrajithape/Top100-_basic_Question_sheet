// shift element of array left to right 
#include<bits/stdc++.h>
using namespace std;
void rotatedArray(int arr [] , int n , int k )
{   if(k == 0)
         return ;
    int j = 0 ;
    for(int i = 1 ; i < n ; i++)
    {
        swap(arr[j] , arr[i]);
    }
    rotatedArray(arr , n , k-1);
}

int main()
{
    int arr[] = {2,4,6,8,10};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int k = 1;
    cout << " before rotated " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << "  " ;
    }


  // Approach 1 
 //    rotatedArray(arr , n , 3 );

   

    // Approach 2 : Reverse array 
    // reverse(arr , arr+n-k);
    // reverse(arr+n-k , arr+n);
    // reverse(arr , arr+n);
     cout << " after rotated :  " << endl;
    // for(int i = 0 ; i < n; i++)
    // {
    //     cout << arr[i] <<"  ";
    // }

    // Approach 3 : first create temp array and getting value in temp array 
    // Left shift Approach 
   int temp[k];
    for(int i=0; i<k; i++)
      temp[i] = arr[i];
    
    int x = k;
    for(int i=0; x < n; i++){
        arr[i] = arr[x++];
    }
    x = 0;
    
    for(int i=n-k; i<n; i++)
       arr[i] = temp[x++];
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    

}