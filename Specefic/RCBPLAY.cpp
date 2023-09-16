#include <iostream>
using namespace std;

int main() {

    int t;
    cin >>t;
    while(t--)
    {
        int x,y,z;
        cin >>x>>y>>z;
        
        int z_can=x+z*2;
        
        if(z_can>=y)
        {
            cout<< "YES" <<endl;
        }
        else
        {
            cout<< "NO" <<endl;
        }
        
        
    }
	return 0;
}
