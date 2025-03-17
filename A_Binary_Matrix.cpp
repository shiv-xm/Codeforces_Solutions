#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> A(n, vector<int>(m));
        vector<int> row_xor(n, 0), col_xor(m, 0);
        
    
        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < m; ++j) {
                A[i][j] = row[j] - '0';
                row_xor[i] ^= A[i][j]; 
                col_xor[j] ^= A[i][j]; 
            }
        }

        
        int row_changes = 0, col_changes = 0;
        for (int i = 0; i < n; ++i) 
            if (row_xor[i]) row_changes++;
        
        for (int j = 0; j < m; ++j) 
            if (col_xor[j]) col_changes++;

       
        cout << max(row_changes, col_changes) << endl;
    }

    return 0;
}
