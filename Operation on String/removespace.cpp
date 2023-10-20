#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Remove space form string 
    string s = "P re p i n sta ";
    cout << "string is : " << s << endl;
    for(int i = 0 ; i < s.length(); i++)
    {
        if(s[i] == ' ')s.erase(i,1);
    }
    cout << " After Removing space in string : " << s << endl;
}