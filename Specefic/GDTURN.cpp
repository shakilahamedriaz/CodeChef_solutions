#include<bits/stdc++.h>
using namespace std;

string solve(int x, int y)
{
    if(x+y > 6)
    {
         return "yes";
    }
    else 
    {
            return "no";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int test_case;
    cin >>test_case;
    while(test_case--)
    {
         int x, y;
         cin >>x >>y;

         string ans= solve(x, y);
         cout<< ans <<endl;
    }
    return 0;
}