#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin >> testCase;
	while(testCase--)
	{
	    int a , b;
	    cin >>a >>b;
	    float product1, product2;
	    
	    product1=100-(a/100.0);
	    product2=200-(b/100.0);
	    
	    if(product1==product2)
	    {
	        cout<< "BOTH" <<endl;
	    }
	    else if(product2<product1)
	    {
	        cout<< "SECOND" <<endl;
	    }
	    else cout<< "FIRST" <<endl;
	    
	}
	return 0;
}
