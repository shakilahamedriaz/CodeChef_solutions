#include <iostream>
using namespace std;

int main() {

	int testcase;
	cin>>testcase;
	while(testcase--)
	{
	    double n,m;
	    cin>>n>>m;
	    n=n- ((10/100.0)*n);
	    if(n==m) cout<< "EITHER" <<endl;
	    else if(n<m) cout<< "ONLINE" <<endl;
	    else cout<< "DINING" <<endl;
	}
	return 0;
}
