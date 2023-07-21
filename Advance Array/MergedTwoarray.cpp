// Merged two sorted array without using extra space 
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void swapisgreater(int arr1[] , int arr2[] , int ind1 , int ind2)
{
    if(arr1[ind1] > arr2[ind2])
    {
        swap(arr1[ind1] , arr2[ind2]);
    }
}
int main()
{
    int arr1[] = {1,3,5,7,9};
    int n = sizeof(arr1) / sizeof(arr1[0]) ;
    int arr2[] = {2,4,6,8,10};
    int m = sizeof(arr2) / sizeof(arr2[0]) ;


    // Optimal solution : of Merged two sorted array without using extra space use Gap method it is based on shell sort 

    int len = m+n ;
    int gap = len/2  + len%2 ;
    while(gap > 0)
    {
        int left = 0 ;
        int right = left + gap ;

        while(right < len)
        {

            // case 1 : arr1 and arr2 
            if(left < n && right >= n)
            {
                swapisgreater(arr1 , arr2 , left , right - n);
            }
            //case 2 : arr2
            else if(left >= n )
            {
                swapisgreater(arr2 , arr2 , left-n , right-n );
            }
            else
            {
                swapisgreater(arr1 , arr1 , left , right );
            }
            left++;
            right++;
        }
        if(gap==1)break; // this condition is mandatory think about you 
        gap = gap/2 + gap%2 ;
    }

    cout << " \n array 1 is sorted " << endl;
     for(int i = 0 ; i < n ; i++)
    {
        cout << arr1[i] << "  ";
    }
    cout << " array 2 is sorted : " << endl;
    for(int i = 0 ; i < m ; i++)
    {
        cout << arr2[i] << "  ";
    }

    // Let's Come on time complexiety 
    // for first while loop it divides by 2 everytime so it gives log2N
    // Logn*O(n+m)




    // Approach 2 : Merged two sorted array without using extra space 
    // int left = n-1 ; // this largest element index in arr1
    // int right = 0 ;  // this is the smallest element in arr2 
    // while (left >= 0 && right < m)
    // {
    //      if(arr1[left] >= arr2[right])
    //      {
    //         swap(arr1[left--] , arr2[right++]);
    //      }
    //      else
    //      {
    //         break ;
    //      }
    // }
    // sort(arr1 , arr1+n);
    // sort(arr2 , arr2+m);
    // cout << "\n array 1 is sorted : " << endl;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     cout << arr1[i] << "  ";
    // }
    // cout << " array 2 is sorted : " << endl;
    // for(int i = 0 ; i < m ; i++)
    // {
    //     cout << arr2[i] << "  ";
    // }

    // Time complexiety : 
    // O(min(n+m)) + O(nlogn) + O(nlogn)
    


    // Approach 1 : Merged two sorted array Space complexiety O(N+M);
    //int ans[n+m];
    // int i = 0 , j = 0 , k = 0 ;
    // while(i < n || j < m)
    // {
    //     if(arr[i] > brr[j])
    //     {
    //         ans[k++] = brr[j++];
    //     }
    //     else
    //     {
    //         ans[k++] = arr[i++];
    //     } 
    // }
    // for(int i = 0 ; i < k ; i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // int a = 0 ;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     arr[i] = ans[a++];
    // }
    // for(int i = 0 ; i < m ; i++)
    // {
    //     brr[i] = ans[a++];
    // }
    // cout << " Sorted array Array 1 : " << endl;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     cout << arr[i] << "  ";
    // }
    // cout << " \n Sorted array Array 2 : " << endl;
    // for(int i = 0 ; i < n ; i++)
    // {
    //     cout << brr[i] << "  ";
    // }
    
}