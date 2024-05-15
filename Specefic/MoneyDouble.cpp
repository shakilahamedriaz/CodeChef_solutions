#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ll t;
    cin >>t;
    while(t--)
    {
        ll taka, year;
        cin >> taka >>year;

        if(taka<1000)
        {
            taka+=1000;
            year-=1;
        }
        else 
        {
            taka*=2;
            year-=1;
        }

        while(year--)
        {
            taka*=2;
        }

        cout<< taka << "\n";
    }
    

    return 0;
}