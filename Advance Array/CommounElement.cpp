#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Find Commoun element in three sorted array 
  int   ar1[] = {1, 5, 5 , 10,19,21};
  int ar2[] = {3, 4, 5, 5, 10,15,19,21} ;
  int ar3[] = {5, 5, 10, 20,21} ;
  int a = sizeof(ar1) / sizeof(ar1[0]);
  int b = sizeof(ar2) / sizeof(ar2[0]);
  int c = sizeof(ar3) / sizeof(ar3[0]);

// Approach 1 : Using Three Pointer Approach Time complexiety O(N)
int i = 0 , j = 0 , k = 0 ;
while( i < a  && j < b &&  k < c )
{
    if(ar1[i]==ar2[j] && ar2[j] == ar3[k])
    {
        cout << " commoun element : " << ar1[i] << endl;
        i++;
        j++;
        k++;
    }
    else if(ar1[i] <= ar2[j] && ar1[i] <= ar3[k])
    {
        i++;
    }
    else if(ar2[j] <=  ar1[i] && ar2[j] <= ar3[k])
    {
        j++;
    }
    else{
        k++;
    }
}


 // Approach 2 : Brute force method time complexiety O(n^3) 
//   for(int i = 0 ; i < a ;i++)
//   {
//     for(int j = 0 ; j < b ; j++)
//     {
//         for(int k = 0 ; k < c ; k++)
//         {
//             if(ar1[i] == ar2[j] && ar3[k] == ar2[j])
//             { ar1[i] = -1 ;
//                cout << "commoun element is : " << ar3[k]<<endl;
//             }
//         }
//     }
//   }

}