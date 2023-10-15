// check given letter is alphabet or not 
//ASCII Value of alphabet  A - Z 65 to 90 and a - z 97  to 122 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch ;
    cout << " Enter a charater " << endl;
    cin >> ch ;
    if ( ch >= 'a' && ch <= 'z' && ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is a alphabet " << endl ;
    }
    else{
        cout << ch << " is not alphabet " << endl;
    }
}