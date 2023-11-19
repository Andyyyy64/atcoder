#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    int max = A[0];
    int second_max_index = 0;
    for(int i = 0; i < n; i++) {
        if(A[i] < max) {
            second_max_index = i;
            break;
        }
    }
    int second_max = A[second_max_index];
    cout << second_max << endl;
    return 0;
}