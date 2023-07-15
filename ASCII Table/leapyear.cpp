// leap or not 
#include<iostream>
using namespace std;
int main()
{
    int year ;
    cout<<" Enter year : ";
    cin>>year ;
    //  Method 1 : using if else 
    // if( year%400 == 0  || (year % 4 == 0 && year % 100  != 0))
    // {
    //     cout<< year << " it is leap year ! "<<endl; 
    // }
    // else
    // {
    //     cout<< year << " it is not leap year ! "<<endl; 
    // }


    // method 2 : using ternary operator 
    int flag =( year%400 == 0 || (year%4==0 && year % 100 != 0 )) ? 1 : 0 ;
    if(flag == 1 )
    {
         cout << year << " is leap year "<<endl;
    }
    else
    {
       cout << year << " is not leap year "<<endl;
    }
    
    


}