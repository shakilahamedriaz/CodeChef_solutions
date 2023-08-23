#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
	    int a, b, c;
	    cin >>a >>b >>c;
	   cout<<max(max(a,b),c)<<endl;
	   
	}
	return 0;
}
