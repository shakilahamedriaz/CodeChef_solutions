#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(vector<int>a, int n)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=10 && a[i]<=60)
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;
}

int main() {
	// your code goes here
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        solve(a,n);
    }
	return 0;
}
