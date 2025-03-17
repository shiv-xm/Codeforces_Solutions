#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int cnt = 3 * (n / 15);  
        int remainder = n % 15;  
        for (int i = 0; i <= remainder; i++) {
            if (i % 3 == i % 5) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}
