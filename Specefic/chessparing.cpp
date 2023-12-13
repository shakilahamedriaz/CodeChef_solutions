#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        if(x==0) cout<< "0"<<endl;
        else
        {
         int tem=n*2-x;
         cout<<x-tem<<endl;
        }
        
    }

    return 0;
}
