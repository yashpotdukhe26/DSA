#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of columns: ";
    cin >> n;
    cout << "Enter number of rows: ";
    cin >> m;

    vector<vector<string>> arr(m, vector<string>(n));
    cout << "Enter the elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    // Display the matrix
    cout << "Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // Custom spiral-like printing
    cout << "Custom pattern output:\n";
    // First row
    for (int j = 0; j < n; j++)
        cout << arr[0][j] << ",";

    // Right column except first and last row
    for (int i = 1; i < m - 1; i++)
        cout << arr[i][n - 1] << ",";

    // Last row in reverse
    for (int j = n - 1; j >= 0; j--)
        cout << arr[m - 1][j] << ",";

    // Left column (excluding top and bottom)
    for (int i = m - 2; i > 0; i--) {
        if (i > 1)
            cout << arr[i][0] << ",";
        else {
            for (int j = 0; j < n - 1; j++)
                cout << arr[i][j] << ",";
        }
    }

    // Inner layer right
    for (int i = 2; i < m - 1; i++) {
        if (i < m - 2)
            cout << arr[i][n - 2] << ",";
        else {
            for (int j = n - 2; j > 0; j--)
                cout << arr[i][j] << ",";
        }
    }

    // Final inner top row
    for (int j = 1; j < n - 1; j++)
        cout << arr[m - 3][j] << ",";

    return 0;
}
