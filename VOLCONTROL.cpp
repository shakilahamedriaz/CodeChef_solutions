#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,f,l;
    cin>>t;

    while(t--)
    {
        cin>>f>>l;
       if(f<l){

        cout<<l-f<<endl;
       }
       else{
        cout<<f-l<<endl;
       }
    }

    return 0;
}
