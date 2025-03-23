#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        
        if (sum % n == 0 && sum / n == x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
