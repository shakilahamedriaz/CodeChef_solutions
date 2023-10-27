#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int min_moves_to_open_lock(int N, int M, string S, string K) {
    int min_moves = INT_MAX;

    for (int i = 0; i <= N - M; ++i) {
        int moves = 0;
        for (int j = 0; j < M; ++j) {
            int diff = abs(S[i + j] - K[j] - '0');
            moves += min(diff, 10 - diff);
        }
        min_moves = min(min_moves, moves);
    }

    return min_moves;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, M;
        cin >> N >> M;
        string S, K;
        cin >> S >> K;
        int result = min_moves_to_open_lock(N, M, S, K);
        cout << result << endl;
    }

    return 0;
}
