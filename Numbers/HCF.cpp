// HCF stands for higest commoun factor : hcf of two numbers is largest positive integer that can divided both the numbers 


#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    cout << " Enter two number ?" << endl;
    int num1 ;
    cin >> num1 ;
    int num2 ;
    cin>>num2 ;
   // int minn = min(num1 , num2);
     

    //  // Approach 1 : Time complexiety O(n)
    //  int hcf = 1 ;
    // for(int i = 1 ; i <= minn ; i++)
    // {
    //        if(num1%i == 0 && num2%i ==0)
    //        {
    //            hcf = i ;
    //        }
    // }
   // cout << " HCF of " << num1 << " and " << num2 << " is : " << hcf << endl;

    // Approach 2 : Repeted subtraction 

    // Approach 2 : Repeted Subtraction best Approach compare to iterative 
     while(num1 != num2 )
     {
        if(num1 > num2 )
        {
            num1 -= num2 ;
        }
        else{
            num2 -= num1 ;
        }
     }
     cout << " Greates Commun factor of given number is : " << num1 << endl;

}