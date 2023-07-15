// disjoint array :  Array is said to be disjoint array it two array have no element in commoun .
#include<iostream>
#include<set>
using namespace std;
bool disjoint(int arr[] , int brr[] , int n , int m)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(arr[i] == brr[j])
            {
                return false;
            }
        }
    }
    return true;

}
int main()
{
    int arr[] = {12,56,5,56,6,5};
    int brr[] = {0,5,654};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    int m = sizeof(brr) / sizeof(brr[0]) ;

//    bool ans =  disjoint(arr , brr , n , m);
//    if(ans)
//    {
//     cout << " array is disjoint " << endl;
//    }
//    else
//    {
//     cout << " array is NOT disjoint  "<< endl;
//    }
   
   set<int>s;
   for(int i = 0 ; i < n ; i++)
   {
    s.insert(arr[i]);
   }
   bool ans = true;
   for(int i = 0 ; i < m ; i++)
   {
      if(s.find(brr[i]) != s.end())
              ans = false ;
   }

   if(ans)
   {
    cout << " array is disjoint " << endl;
   }
   else
   {
    cout << " array is NOT disjoint  "<< endl;
   }

 }