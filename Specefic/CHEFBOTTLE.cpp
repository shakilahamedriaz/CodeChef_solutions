#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin >>a>>b>>c;
	    int ans= min(a,c/b);
	    cout<<ans<<endl;
	}
	return 0;
}
