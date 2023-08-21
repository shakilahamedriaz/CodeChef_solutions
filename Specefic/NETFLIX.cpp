#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >>testcase;
	while(testcase--)
	{
	    int a, b, c, x;
	    cin >>a >>b >>c >>x;
	    
	    if((a+b >= x) || (a+c >=x) || (b+c>=x)) cout<< "YES"<<endl;
	    else cout<< "NO" <<endl;
	}
	return 0;
}
