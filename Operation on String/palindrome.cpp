// check palindrom in string 
#include<bits/stdc++.h>
using namespace std;
string reverse(string a)
{
    int s = 0 , e = a.size()-1;
    while(s<=e)
    {
        swap(a[s++] , a[e--]);
    }
    return a ;
}
int main()
{
    string s = "mam";
    string temp = reverse(s);
    if(s==temp)cout << " Palindrome"<<endl;
    else
      cout << "Not palindrome"<<endl;
}