#include <iostream>
using namespace std;

int main() {
	
    int t;
    cin >>t;

	while(t--)
	{
	    double a,b;
	    cin >>a >>b;
	    double p1, p2;
        double x=100.0, y=200.0;

	    p1=x-((x*a)/100.0);
	    p2=y-((y*b)/100.0);
	    
	    if(p1==p2)
        {
            cout<< "BOTH" <<endl;
        }
        else if(p1<p2)
        {
            cout<< "FIRST"<<endl;
        }
        else
        {
            cout<< "SECOND"<<endl;
        }
	    
	}
	return 0;
}
