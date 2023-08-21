#include <iostream>
#include<vector>
using namespace std;

int main() {

	int n;
	cin >>n;
	vector<int>arr(n);
	for(int i=0; i<n; i++)
	{
	    cin >>arr[i];
	}
	int evencnt=0, oddcnt=0;
	for(int i=0; i<n; i++)
	{
	    if(arr[i]%2==0)
	    {
	        evencnt++;
	    }
	    else
	    {
	        oddcnt++;
	    }
	}
	
	if(evencnt>oddcnt)
	{
	    cout<< "READY FOR BATTLE" <<endl;
	}
	else
	{
	    cout<< "NOT READY" <<endl;
	}
	
	return 0;
}
