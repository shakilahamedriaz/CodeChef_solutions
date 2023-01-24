#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){

     ll t;
     cin>>t;

     while(t--){

        ll n, last,first;

        cin>>n;

        last= n%10;

        while(n>=10){

            n = n/10;
        }
        first=n;

        cout<<last+first<<endl;


     }




return 0;

}
