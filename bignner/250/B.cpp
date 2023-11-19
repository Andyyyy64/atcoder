#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    for (int i = 0; i < N * A; ++i) {
        string row;
        for (int j = 0; j < N * B; ++j) {
            // set tile color
            if (((i / A) + (j / B)) % 2 == 0) { // i/A and j/B is a row and column number which we are in
                // if the sun of row and column number is even, the tile is white
                row += '.';
            } else {
                // if the sum of row and column number is odd, the tile is black
                row += '#';
            }
        }
        cout << row << endl;
    }

    return 0;
}