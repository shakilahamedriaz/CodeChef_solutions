#include<bits/stdc++.h>
using namespace std;

int main()

{
   int t;
   cin >>t;

   while(t--)
   {
    
      int a,m;
      cin >>a>>m;

      if(a<50)
      {
         cout<< "Z" <<endl;
      }
      else if(m<50 && a>=50 )
      {
        cout<< "F"<<endl;
      }
      else
      {
         cout<< "A"<<endl;
      }
      

   }


    return 0;
}