#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
     ll t,n;
     cin>>t;

     while(t--){

        cin>>n;

        ll cnt=0;

        while(n>0){

            int mod= n%10;
            if(mod== 4) cnt++;

            n/=10;

        }

        cout<< cnt<<endl;

     }





    return 0;
}
