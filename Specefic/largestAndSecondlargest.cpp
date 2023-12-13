#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        set<int> st;
        for (int i = 0; i < n; i++) {
            st.insert(arr[i]);
        }

        auto last = prev(st.end());
        auto s2ndLast = prev(last);

        long long result = *last + *s2ndLast;

        cout << result << endl;
    }
    return 0;
}
