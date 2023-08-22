#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
	    int total_people, min_age;
	    cin >> total_people >> min_age;
	    vector<int>v(total_people);
	    
	    int cnt=0;
	    for(int i=0; i<total_people; i++)
	    {
	        cin >> v[i];
	        
	        if(v[i]>=min_age)
	        {
	            cnt++;
	        }
	    }
	    
	    cout<<cnt<<endl;
	}
	return 0;
}
