#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >>testcase;

    while(testcase--)
    {
        int pet,dis;
        cin >>pet>>dis;
        int totol_distance_canGo=pet*15;

        if(dis*2<=totol_distance_canGo) cout<< "YES"<<endl;
        else cout<< "NO" <<endl;

    }

    return 0;
}
