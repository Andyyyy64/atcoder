#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
  }
  for (int i = 0; i < N; i++) {
    int value = A[i] * B[i];
    cout << value;
  }
}