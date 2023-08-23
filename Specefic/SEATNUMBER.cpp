#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >>testcase;
	while(testcase--)
	{
	    int n;
        cin>>n;
	    if(n<=15)
	    {
	        if(n>=1 && n<=10) cout<< "Lower Double" <<endl;
	        else cout<< "Lower Single" <<endl;
	    }
	    else if(n<=30)
	    {
	        if(n>=16 && n<=25) cout<< "Upper Double" <<endl;
	        else cout<< "Upper Single"<<endl;
	    }
	}
	return 0;
}
