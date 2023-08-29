#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--)
	{
	    int n, x, p;
	    cin>>n>>x>>p;
	    
	    int plus=x*3;
	    int minus=n-x;
	    int marks= plus-minus;
	    
	    if(marks>=p) cout<< "PASS"<<endl;
	    else cout<< "FAIL"<<endl;
	}
	return 0;
}
