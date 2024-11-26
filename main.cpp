#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
   int a , b ;
   cin >> a >> b ;
   int s = a + b + 1 ;
   string c ;
   cin >> c ;
   if(c.size()!=s)
   {
       cout << "No" ;
       return 0 ;
   }
   if(c[a]!='-')
   {
       cout << "No" ;
       return 0 ;
   }
   else
   {
       for(int i = 0 ; i<c.size() ; i++)
       {
           if(i==a)
           {
               continue;
           }
           else if(c[i]>='0'&&c[i]<='9')
           {
               continue;
           }
           else
           {
               cout << "No" ;
               return 0 ;
           }
       }
       cout << "Yes" << endl ;
   }

    return 0;
}
