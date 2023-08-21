#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
	    int x, n;
	    cin >>x >>n;
	    int num=x*n;
	    
	    string s=to_string(num);
        int len= s.length();
        if(len==5)
        {
            if(s[0]!=0)
            {
                cout<< "YES" <<endl;
            }
        }
        else
        {
            cout<< "NO" <<endl;
        }
	    
	    
	}
	return 0;
}
