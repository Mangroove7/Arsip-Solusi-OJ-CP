#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    
    // Input the number of rows and columns
    std::cin >> r >> c;

    // Validate input
    if (r <= 0 || c <= 0) {
        cerr << "Error: Rows and columns must be positive integers." << endl;
        return 1; // Exit with an error code
    }

    // Initialize a 2D vector with dimensions r x c
    vector<vector<int>> gedung(r, vector<int>(c));

    // Input data into the 2D vector
    for (int i = 0; i < r; i++) {
        string row;
        cin >> row;

        // Validate row length
        if (row.length() != c) {
            cerr << "Error: Row " << i + 1 << " does not have " << c << " characters." << endl;
            return 1;
        }

        // Convert characters to integers
        for (int j = 0; j < c; j++) {
            if (row[j] == '0') {
                gedung[i][j] = 0;
            } else if (row[j] == '1') {
                gedung[i][j] = 1;
            } else {
                cerr << "Error: Invalid character '" << row[j] << "' in row " << i + 1 << "." << endl;
                return 1;
            }
        }
    }

    // Remove full rows and shift elements down
    for (int i = 0; i < r; i++) {
        bool isFull = true;

        // Check if the row is full (all elements are 1)
        for (int j = 0; j < c; j++) {
            if (gedung[i][j] == 0) {
                isFull = false;
                break;
            }
        }

        // If the row is full, set it to zero and shift all rows above it down
        if (isFull) {
            for (int j = 0; j < c; j++) {
                gedung[i][j] = 0; // Clear the full row
            }

            // Shift all rows above this row down by one
            for (int k = i; k > 0; k--) {
                gedung[k] = gedung[k - 1]; // Copy the row above
            }

            // Set the topmost row to zero
            gedung[0] = vector<int>(c, 0);

            // Re-check the current row after shifting
            i--; // Decrement i to re-check the current row
        }
    }

    // Output the 2D vector
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << gedung[i][j];
        }
        cout << endl; // Newline after each row
    }

    return 0;
}