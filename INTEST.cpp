#include<bits/stdc++.h>
using namespace std;
int main(){


int n,k,t,cnt=0;

cin>>n>>k;

for(int i=1; i<=n; i++){
    cin>>t;

    if(t%k==0)

        cnt++;

}

cout<<cnt<<endl;
return 0;
}
