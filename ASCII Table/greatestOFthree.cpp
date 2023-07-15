// Find greatest of three Number 
#include<iostream>
using namespace std;
int main()
{
    
     int a , b , c ;
     cout<<"Enter three numbers : ";
     cin>>a>>b>>c ;
     cout<<" Three numbers is given as : "<<endl;
     cout << a << " \t"<<b<<"\t"<<c<<endl;

      // Method 1  : using if else 
    //   if(a >= b && a >= c)
    //   {
    //     cout << a << " is greater number "<<endl;
    //   }
    //   else if(b >= c && b >= a)
    //   {
    //     cout << b << " is greater number "<<endl;
    //   }
    //   else
    //   {
    //     cout << c << " is greater number "<<endl;
    //   }
  
   // method 2 : using inbuild max funtion 
      
    //   int ans = max( a , max(b,c));
    //   cout <<ans << " is greater number "<<endl;

    // Method 3 : using ternary operator 
    int ans = b > c ? b : c ;
    int res = max(a , ans );
    cout << res << " is greater number "<<endl;


}