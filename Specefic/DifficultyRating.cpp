#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[n];
        bool ok=true;
        for(int i=1; i<=n; i++)
        {
            cin >>arr[i];
            
        }
        for(int i=1; i<=n-1; i++)
        {
            if(arr[i+1]<arr[i])
            {
                ok=false;
                break;
            }
        }

        if(ok)
        {
            cout<< "Yes" <<endl;
        }
        else
        {
            cout<< "No" <<endl;
        }
    }

    return 0;
}