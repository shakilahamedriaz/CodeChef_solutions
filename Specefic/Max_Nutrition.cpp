#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<int> types(N), nutrition(N);

        for (int i = 0; i < N; ++i) {
            cin >> types[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> nutrition[i];
        }

        int ans = 0;

        for (int i = 1; i <= N; i++) {
            int maxNutrition = INT_MIN;

            for (int j = 0; j < N; j++) {
                if (types[j] == i && nutrition[j] >= 0) {
                    maxNutrition = max(maxNutrition, nutrition[j]);
                }
            }
            if (maxNutrition > 0) {
                ans += maxNutrition;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
