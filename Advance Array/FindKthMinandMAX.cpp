// Write a cpp Programm to find K th Minimum and Maximum Number 
#include<bits/stdc++.h>
using namespace std;
int main()
{
 // Set is Immutable 
 int arr[] = {0,54,65,21,3,12,87,45,8,90};
 int n = sizeof(arr) / sizeof(arr[0]) ;
 set<int>s;
 for(int i = 0 ; i < n ; i++)
 {
    s.insert(arr[i]);
 }
 int k ;
 cout << " Enter k element : " ;
 cin >> k ;
set<int>::iterator it = s.begin();
set<int>::iterator at = s.end();
at--;
for(int i = 0 ; i < k - 1 ; i++)
{
    it++;
    at--;
}

cout << k << " Minimum  element is given array is :  " << *it << endl;
cout << k << " Maximum   element is given array is :  " << *at << endl;


// In vector we can adding address but in case of set we can't do that 
// In case of Vector  it = v.begin() + 3 ; --> this pointing to the 4 th index of the vector 
// In case of Set it = s.begin() + 3 --> it is not possible it gives you error 
// in case of set it++ is possible we apply it unary operator 

 
}