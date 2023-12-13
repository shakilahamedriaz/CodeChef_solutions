#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        float per= n/(k+1);
        int result= int(per);
        int contain=per;

        result*=(k+1);
        cout<<(n-result)+contain<<endl;
    }

    return 0;
}
