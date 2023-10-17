// Length of string without using length fuction 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Yuvraj";
    int len = 0 ;
    for(int i = 0 ; a[i] != '\0' ; i++)
    {
         len++;
    }
    cout << "length of string is : " << len << endl;
}