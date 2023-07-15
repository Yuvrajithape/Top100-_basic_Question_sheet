// Find Minimum Scaler of two vector
#include<bits/stdc++.h>
using namespace std;
int main()
{  int n = 3 ;
    vector<int>arr(n);
    vector<int>brr(n);
    
    cout << " Enter element of vector 1 : " << endl ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ; 
    }
    cout << " Enter element of vector 2 : " << endl ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> brr[i] ; 
    }

    // sort vector 1 in acending order 
    sort(arr.begin() , arr.end());
    //sort vector 2 in decending order 
    sort(brr.begin(), brr.end() , greater<int>());
     
    int ans = 0 ;
    for(int i = 0 ; i < n ;i++)
    {
        ans += (arr[i] * brr[i]) ; 
    }

    cout << " \n Minimum scaler of two vector is : " << ans << endl;

    
}