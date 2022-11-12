#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,a,b,c;
    cin>>t;

    while(t--)
    {

     cin>>a>>b>>c;
        int sum= a+b+c;

        if(sum==180)
        {

            cout<< "YES"<<"\n";
        }
        else
        {


            cout<< "NO"<< "\n";
        }


    }


    return 0;

}
