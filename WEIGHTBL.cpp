#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;

        int c=w2-w1;

        if(c<(m*x1)){

            cout<< "0"<<endl;
        }
        else{


            if(c>(m*x2)){

                cout<< "0"<<endl;

            }
            else{

                cout<< "1"<<endl;
            }
        }




    }




    return 0;
}
