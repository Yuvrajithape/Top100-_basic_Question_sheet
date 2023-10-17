// Remove all character in string expect alphabet 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "*1prep_insta*" ;
    int len = s.size();
    for(int i = 0 ; i < len; i++)
    {  
        if(!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'))
        {
           for(int j = i ; j < len ; j++ )
           {
            s[j] = s[j+1];
           }
           i--;
           len--;

        }
        
      
    }
    cout << " Output is : " << s << endl;
}