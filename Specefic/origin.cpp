#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<ll> v1, v2, v3; // Initialize vectors with size 0

int sumofdigits(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
}



int main()
{
    ll sum = 0;
    for(ll i=1; i<1000000; i++)
    {
        sum+=sumofdigits(i);
        v1.push_back(sum);
    }

    for(ll i=1000000; i<1000000000000; i++)
    {
        sum+=sumofdigits(i);
        v2.push_back(sum);
    }

    for(ll i=1000000000000; i<1000000000000000000; i++)
    {
        sum+=sumofdigits(i);
        v3.push_back(sum);
    }

    ll t; cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        
        if(n<1000000) cout << v1[n] << "\n";
        else if(n<1000000000000) cout << v2[n] << "\n";
        else cout << v3[n] << "\n";
    }

    return 0;
}
