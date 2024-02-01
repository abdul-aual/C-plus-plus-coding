#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;

    while (true) {
        // Read the order of the bidimensional array
        cin >> N;

        // Check for the end of input
        if (N == 0) {
            break;
        }

        // Build and print the bidimensional array
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                // Calculate the value for the current position
                int value = min(min(i - 1, j - 1), min(N - i, N - j)) + 1;

                // Format and print the values
                cout << right << setw(3) << value;

                // Print a space after each value (except the last one in the row)
                if (j < N) {
                    cout << " ";
                }
            }
            cout << endl;
        }

        // Print a blank line after each array
        cout << endl;
    }

    return 0;
}
