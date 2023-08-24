#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y;
    cin >>x >>y;

    if(x<=y)
    {
        cout<<x<<endl;
    }
    else{

        int temp= int(x/y);
        int a=x-(temp*y);
        int ans= temp+a;
        cout<<ans<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
