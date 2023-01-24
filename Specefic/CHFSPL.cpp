#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

int t,a,b,c;
cin>>t;

while(t--){

    cin>>a>>b>>c;

    int x= a+b;
    int y= a+c;
    int z= b+c;

    if(x>y && x>z){

        cout<<x<<endl;
    }
    else if(y>x && y>z){

        cout<<y<<endl;
    }
    else{
        cout<<z<<endl;
    }

}

return 0;
}




