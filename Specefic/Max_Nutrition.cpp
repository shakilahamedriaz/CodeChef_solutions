#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> types(N);
        vector<int> nutrition(N);

        for (int i = 0; i < N; ++i) {
            cin >> types[i];
        }

        for (int i = 0; i < N; ++i) {
            cin >> nutrition[i];
        }

        int maxNutrition = 0;
        unordered_set<int> st;

    
        for (int i = 0; i < N; i++) {
            st.insert(types[i]);
        }

        
        vector<int> p(st.begin(), st.end());

        for (int i = 0; i < N; i++) {
            if (p[i] == nutrition[i]) {
                int bro = max(nutrition[i], (i + 1 < N) ? nutrition[i + 1] : 0);
                maxNutrition += max(0, bro);
            } else {
                int bro = nutrition[i];
                maxNutrition += max(0, bro);
            }
        }

        cout << maxNutrition << endl;
    }

    return 0;
}
