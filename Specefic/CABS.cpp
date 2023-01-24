#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<< "ANY"<<endl;
        }
        else if(a<b)
        {

            cout<< "FIRST"<<endl;
        }
        else
            cout<<"SECOND"<<endl;

    }




    return 0;

}
