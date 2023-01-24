#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int n;

int sum=0;
while(t--){

    cin>>n;

    for(int i=1; i<=n; i++){

       sum+=sum+i;

        while(sum%2==0){

            i++;
        }
    }

    cout<<n-i<<endl;

}




return 0;
}
