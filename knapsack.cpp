#include <iostream>
#include <vector>

using namespace std;

bool canObtainPerfectScore(vector<int>& marks, int totalMarks) {
    int n = marks.size();
    vector<vector<bool>> dp(n + 1, vector<bool>(totalMarks + 1, false));

    // Base case: If the total marks required is 0, it is always possible.
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // Fill the dp table using the subset sum logic.
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= totalMarks; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j >= marks[i - 1]) {
                dp[i][j] = dp[i][j] || dp[i - 1][j - marks[i - 1]];
            }
        }
    }

    return dp[n][totalMarks];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> marks(n);
        for (int i = 0; i < n; ++i) {
            cin >> marks[i];
        }

        // Check if it's possible to obtain a perfect score
        if (canObtainPerfectScore(marks, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

