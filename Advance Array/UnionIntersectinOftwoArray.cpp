
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   // Find Union and Intersection of two sorted array 
// Union : union ot two array is commoun and distinct element in an two array
// Intersection : commoun element in an array 
    int arr[] = {2,4,6,8,10,12,12,13,14,16,18};
    int  n = sizeof(arr) / sizeof(arr[0]) ;
    int brr[] = {1,3,5,7,8,9,10,15,16};
    int m = sizeof(brr) / sizeof(brr[0]) ;

    // Approach 1 : create ordered map geting all element in an ordered map 
     map<int , int>mp;
     for(auto i : arr){mp[i]++;}
     for(auto i : brr){mp[i]++;}
     // Now all the element of two array is Getting into map 

     // In Case of Intersection map gives wrong answer ..... because if one array contain duplicate element that element is not present in another array but that element is also counted so for intersection we can't use map 
     // In case of unions we use map but for intersection do not use maps 
    
    



    // Approach 2 : As per quesition two array is in sorted manner so we create two index i and j 
    // int i = 0 ; 
    // int j = 0 ;
    // vector<int>u;
    // vector<int>sec;
    // while(i < n && j < m )
    // {
    //     if(arr[i] < brr[j])
    //     {
    //         u.push_back(arr[i++]);
    //     }
    //     else if(arr[i] > brr[j])
    //     {
    //         u.push_back(brr[j++]);
    //     }
    //     else
    //     {
    //         u.push_back(arr[i]);
    //         sec.push_back(brr[j]);
    //         i++;
    //         j++;
    //     }
    // }
    // while(i < n)
    // {
    //     u.push_back(arr[i++]) ;  
    // }
    // while(j < m)
    // {
    //     u.push_back(brr[j++]);
    // }

    // cout << " \n Union of two array is given as : " << endl;
    // for(int i = 0 ; i < u.size() ; i++)
    // {
    //     cout << u[i] << "  " ;
    // }
    // cout << " \n Intersection of two array is given as : " << endl;
    // for(int i = 0 ; i < sec.size() ; i++)
    // {
    //     cout << sec[i] << "  " ;
    // }

    





    
}