#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "{(((({{{[[[[[]]]]]}}}))))}" ;
    // Find Balanced Parenthesis or not 
    // using stack data structure 
    stack<char>st ;
    for(auto it : s )
    {
        if(it == '[' || it == '(' || it == '{')
        {
            st.push(it);
        }
        else{

             if(!st.empty())
             {
                char ch = st.top();

                if( (ch == '(' && it == ')')   || (ch == '[' && it == ']')  || ( ch == '{' && it == '}')   )
                {
                   st.pop();
                }
                else{
                    
                    cout << "  Unbalanced Pyrenthesis " << endl;
                    return 0 ;
                }
             }
            else{
                 cout << " Unbalanced Pyrenthesis " << endl;
                    return 0 ;
            }
        }
         
    }

    if(st.empty())
    {
        cout << " Balanced Pyrenthesis " << endl;
    }
    else{
        cout << " Unbalanced Pyrenethesis " << endl; 
    }
      
}