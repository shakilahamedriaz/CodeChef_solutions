#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tescase;
	cin >> tescase;
	while(tescase--)
	{
	    int n,m,k;
	    cin >>n>>m>>k;
	    
	    int a= m-k;
	    
	    if(n<=a) cout<< "YES" <<endl;
	    else     cout<< "NO"  <<endl;
	}
	return 0;
}
