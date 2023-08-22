#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
	    int a,b,c,d;
	    cin >> a>> b >>c >>d;
	    
	    if(c>=a && d>=b) cout<< "POSSIBLE" <<endl;
	    else  cout<< "IMPOSSIBLE" <<endl;
	}
	return 0;
}
