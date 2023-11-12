#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin >>t;
    while(t--)
    {   
        
        cin >>n >>x;
        vector<int>A(n),B(n);
        for(int i=0;i<n;i++)
        {
            cin >>A[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >>B[i];
        }

        int totalCost=0;
        for(int i=0; i<n; i++)
        {
            if(A[i]>=x)
            {
                totalCost+=B[i];
            }
        }

        cout<<totalCost<<endl;
    }
    return 0;
}