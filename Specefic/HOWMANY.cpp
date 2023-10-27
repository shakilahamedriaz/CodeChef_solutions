#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sr_sol(int n)
{
    int cnt=0;
    if(n==0) cnt=1;
    else
    {
        while(n !=0)
        {
            n/=10;
            cnt++;
        }
        
    }

    cout<<cnt<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >>n;
    sr_sol(n);

    return 0;
}