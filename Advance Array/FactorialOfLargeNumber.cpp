// // Factorial of large Number 
// #include<bits/stdc++.h>
// using namespace std;
// #define MAX 500       // It is called as macro 
// int multiply(int x , int res[] , int res_size);
// void factorial(int n)
// {
//     int res[MAX];
//     res[0] = 1 ;
//     int  res_size = 1 ;

//     for(int i = 2 ; i <=n ; i++ ){
//         res_size = multiply(i , res , res_size);
//     }

//     cout << " factorial of " << n << " is " ;
//     for(int i = res_size - 1  ; i >= 0 ; i--)
//     {
//         cout << res[i];
//     }

// }
// int multiply(int x , int res[] , int res_size)
// {
//     int carry = 0 ;
//     for(int i = 0 ; i < res_size ; i++)
//     {
//         int prod = res[i] * x + carry ;

//         res[i] = prod % 10 ;

//         carry = prod / 10 ;
//     }
//     while(carry)
//     {
//         res[res_size] = carry % 10 ;
//         carry /=  10 ;
//         res_size++;
//     }
//     return res_size ; 

// }
// int main()
// {
//     int n ;
//     cout << " Enter a number : " ;
//     cin >> n ;
//     if( n < 0 )
//     {
//          cout << " We can't Find Factorial of negative number " << endl;
//          return 0 ;
//     }
//     factorial(n);
   
 
// // }

// // Factorial of largest Number using Doubly Linked list 
// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next ;
//     Node* pre ;

//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//         this->pre = NULL;
//     }
// };
//  void insertATtail(Node*&tail , int d)
// {
//     Node*newnode = new Node(d);
//     tail->next = newnode ;
//     newnode->pre = tail ;
//     tail = newnode ;

// }

// void fact(Node*&head , int d , Node*&tail)
// {
//     Node*temp = head ;
//     int carry = 0;
//     while (temp)
//     {
//         int prod = (temp->data)*d + carry ; 
//         temp->data = prod % 10 ;
//         carry = prod / 10 ;
//         temp = temp->next ;
//     }
//     while(carry)
//     {
//         insertATtail(tail , carry%10);
//         carry = carry / 10 ;
//     }
    
// }
// void factorial(Node*&tail)
// {
//     while(tail)
//     {
//         cout << tail->data;
//         tail = tail->pre ;
//     }
// }

// int main()
// {
//     Node*temp = new Node(1);
//     Node*head = temp;
//     Node*tail = temp ;
//     int n ;
//     cout << " Enter a number : " ;
//     cin >> n ;
//     if ( n < 0 )
//     {
//         cout << " You can't find factoial of negative number " << endl;
//         return 0 ;
//     }
//     for(int i = 2 ; i <= n ; i++)
//     {
//         fact(head , i , tail);
//     }
//     cout << " fatorial of " << n << " is " ;
//     factorial(tail);
    


// }

// Factorial of largest number using singly linked list 

// for printing tail we use to recursion 
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node*pre = NULL;
    
    Node(int d) // it is special type of function which is involved at the time of object creation 
    {
        this->data = d ;
        this->pre = NULL ;
    }

};

void multiply(Node*&tail , int d )
{
      Node*temp = tail , *prenode = tail;
      int carry = 0 ;
      while(temp)
      {
        int prod =( temp->data * d) + carry ;
        temp->data = prod % 10 ;
        carry = prod / 10 ;
        prenode = temp ;
        temp = temp->pre ;
      }
      while(carry)
      {
        prenode->pre = new Node(int(carry % 10 ));
        carry /= 10 ;
        prenode = prenode->pre ;
      }

}
// for printing reverse order of linked list we need to print linked list recursive order ok ! 
void print(Node*tail)
{
    if(tail == NULL) // base condition 
        return ;
    print(tail->pre); // recursive relation 
    cout << tail->data ;

}
int main()
{
    Node*tail = new Node(1) ;
    int n ;
    cout << " Enter a number : " ;
    cin >> n ;
    for(int i = 2 ; i <= n ;i++)
    {
        multiply(tail , i );
    }
     print(tail);
}