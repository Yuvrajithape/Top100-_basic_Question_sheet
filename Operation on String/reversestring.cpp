// Print Given string in reverse order 
#include<bits/stdc++.h>
using namespace std;
void reverse(string &a)
{
    int s = 0 , e = a.length()-1;
    while( s <= e )
    {
        swap(a[s++] , a[e--]);
    }
}
int main()
{
    string str = "My name is Yuvraj Ithape " ;
    cout << "Original string is : " << endl;
    cout << str << endl;
    reverse(str.begin() , str.end());
   // reverse(a);
    cout << " reverse string is " << endl;
    cout << str << endl;

}