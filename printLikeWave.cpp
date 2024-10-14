#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    
    int arr[m][n];

    // Input matrix elements
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Wave print column-wise
    for(int col = 0; col < n; col++) {
        if(col & 1) {
            // Odd index column (bottom to top)
            for(int row = m - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        } else {
            // Even index column (top to bottom)
            for(int row = 0; row < m; row++) {
                cout << arr[row][col] << " ";
            }
        }
    }

    return 0;
}
