#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int s,a,b,c;
    while(t--){

        cin>>s>>a>>b>>c;


        float p = s + (c/100.0)*100.0;

        cout<<p<<endl;

          if(p>=a && p<=b){

            cout<< "Yes"<<endl;
          }
           else{

            cout<< "NO"<<endl;
           }

    }


    return 0;

}
