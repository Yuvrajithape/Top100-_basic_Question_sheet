// Vovel and Consonants 
// Vovel are a , e , i , o , u  other than this letter are consonants 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch ;
    cout << " enter a charater : " << endl;
    cin >> ch ;
    if( ch == 'a' ||  ch == 'e' ||  ch == 'i' || ch == 'o' ||  ch == 'u' )
    {
        cout << ch << " is vovel letter " << endl;
    }
    else{
        cout << ch << " is a consonants " << endl;
    }

}
