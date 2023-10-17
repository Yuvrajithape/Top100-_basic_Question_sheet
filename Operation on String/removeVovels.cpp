// Remove all vovels in given string 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "aaaaabadakjfkjdha";
  

  // Approach 1 using string variable 
    // string ans = "";
    //  for(int i = 0 ; i < str.size() ; i++)
    // {
    //     if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
    //     {
    //        continue;
    //     }
    //     ans+=str[i];
    // }
 

    // Approach 2 not using extra space 
     int len = str.size();
    for(int i = 0 ; i < len ; i++)
    {
         if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
        {
           for(int j = i ; j < len ; j++)
           {
             str[j] = str[j+1];
           }
           i--;
           len--;
        }
       
    }
       cout << "removing vovels and updated string is " << str << endl;
}