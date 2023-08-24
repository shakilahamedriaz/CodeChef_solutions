#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >>testcase;
	while(testcase--)
	{
	    int x,y,z;
	    cin>>x >>y >>z;

        int res=x*y;
        res+=(int)(x/3)*z;

        if(x%3==0)
        {
            res-=z;
        }

        cout<<res<<endl;
	//     int k=x*y;
	//     if(x<=3)
	//     {
	//          cout<<k<<endl;
	//     }
	//    else if(x>3)
	//     {
	//        if(x%3==0)
	//        {
	//            int p=(x/3);
	//            int q=p*z;
	//            cout<<k+q-z<<endl;
	//        }
	//        else if(x%3==1)
	//        {
	//            int p=x/3;
	//            int q=p*z;
	//            cout<<k+q<<endl;
	//        }
	//     }
	   
	    
	    
	}
	return 0;
}
