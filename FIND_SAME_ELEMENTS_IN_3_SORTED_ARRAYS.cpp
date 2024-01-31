/*
Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
*/
#include<iostream>
using namespace std;
int main()
{
     int m,n,q;
     cin>>m>>n>>q;
     int a[m],b[n],c[q];
     for(int i=0;i<m;i++)
          cin>>a[i];
          for(int i=0;i<n;i++)
          cin>>b[i];
          for(int i=0;i<q;i++)
          cin>>c[i];
      int i=0,j=0,k=0;
      while(i<m and j<n and k<q)
      {
             if(a[i]<=b[j] and a[i]<c[k] or a[i]<b[j] and a[i]<=c[k])
             i++;
             else if(b[j]<=a[i] and b[j]<c[k] or b[j]<a[i] and b[j]<=c[k])
             j++;
             else
              if (c[k]<=b[j] and c[k]<a[i] or c[k]<b[j] and c[k]<=a[i])
             k++;
             else if(a[i]==b[j] and b[j]==c[k])
             {
             cout<<a[i]<<" ";
             i++;j++;
             k++ ; 
             }
      }
      

}