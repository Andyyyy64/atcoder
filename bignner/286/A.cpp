#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, P, Q, R, S, key;
  cin >> N >> P >> Q >> R >> S;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i <= Q - P; i++) {
    swap(A[(P - 1) + i], A[(R - 1) + i]);
  }
  for (int i = 0; i < N; i++) {
    if (i != N - 1)
      cout << A[i] << " ";
    else
      cout << A[i] << endl;
  }
}