#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--)
    {
        int a, b, c;
        cin >>a >>b >>c;

        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());
        cout<<v[1]<<endl;

 }
	return 0;
}
