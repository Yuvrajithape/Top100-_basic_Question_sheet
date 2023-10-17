// Toggleing of charater mense converting uppercase charater to lowercase charater 
#include<bits/stdc++.h>
using namespace std;
void toggle(string&str)
{
    for(int i = 0 ; i < str.length() ; i++)
    {
        if(str[i]  >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i]-32;
        }
        else
        {
            str[i] = str[i] + 32 ;
        }
    }
}
int main()
{
   string a = "Yuvraj";
   toggle(a);
   cout << "Toggling of " << a << " is : "<<a << endl;
}