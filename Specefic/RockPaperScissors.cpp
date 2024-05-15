#include<bits/stdc++.h>
using namespace std;

int main()
{
    
     int n; cin >> n;
     string s; cin >>s;
     
     int cnt=0;
     for(int i=0; i<n; i++)
     {
        if(s[i]!=s[i+1]) cnt++;
        else if(s[i] == s[i+1]== s[i+1]) 
        {
            cnt+=2;
            i+=2;

        }
     }

    
 
    return 0;
}