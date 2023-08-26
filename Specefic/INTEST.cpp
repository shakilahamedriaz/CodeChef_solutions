#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin >>n >>k;
    int cnt=0;
    while(n--)
    {
        int a;
        cin >>a;

        if(a%k==0) cnt++;

    }

    cout<<cnt<<endl;

    return 0;
}
