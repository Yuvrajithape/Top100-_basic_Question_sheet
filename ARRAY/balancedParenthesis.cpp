#include<iostream>
using namespace std;
int main()
{
    string s = "{][][][}" ;
    char arr[] = {'[' , ']' , '\0'};
    int n = s.length();
    int m = sizeof(arr) ;
    cout << " size of string :  " << s.size() << endl;
    cout << " length of string :  " << n << endl;
    cout << " size of char array  :  " << m << endl;
    cout << s << endl; 
    s[1] = '\0';    
    s[2] = '\0';    
    s[3] = '\0';    
    s[4] = '\0';    
    s[5] = '\0';    
    s[6] = '\0';    

    s[7] = '\0';
    cout << s << endl;
    cout << " size of string :  " << s.size() << endl;

    cout << arr << endl;

}