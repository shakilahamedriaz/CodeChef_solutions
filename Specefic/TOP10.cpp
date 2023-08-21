#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
	    int x;
	    cin >>x;
	    
	    if(x<=10)
	    {
	        cout<< "YES"<<endl;
	    }
	    else{
	        cout<< "NO" <<endl;
	    }
	}
	return 0;
}
