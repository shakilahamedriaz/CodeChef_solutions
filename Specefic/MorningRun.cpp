#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x, y;
   cin >>x >>y;

   int ans= 2*x + 2*y;

   if(ans >=1000) cout<< "YES" << "\n";
   else cout << "NO" << "\n";

    return 0;
}