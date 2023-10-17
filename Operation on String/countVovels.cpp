// Count Number of Vovels . Vovels are a e i o u 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "prepinsta";
    int cnt = 0 ;
    for(int i = 0 ; i < str.size() ; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )cnt++;
    }
    cout << " Vovels in -> " << str << " string is " << cnt << endl; 
}