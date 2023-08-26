#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[4],cnt=0;
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
	{
	    cin>>arr[i];
	    if(arr[i]>=10)
	    cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}

