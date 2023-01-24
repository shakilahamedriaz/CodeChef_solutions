#include<bits/stdc++.h>
using namespace std;

int main(){

int t,n;
cin>>t;

for(int i=1; i<=t; i++){

    cin>>n;

    if(n>=1 && n<100){

        cout<< "Easy"<<endl;
    }
     else if(n>=100 && n<200){

        cout<< "Medium"<<endl;
    }
    else if(n>=200 && n<=300){

        cout<<"Hard"<<endl;
    }

}




return 0;
}
