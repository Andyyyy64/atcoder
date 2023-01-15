#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  for (int i = 0; i < N; i++) {
    cin >> S;
    char array[S.size()];
    for (int j = 0; j < S.size(); j++) {
        array[j] = S[j];
    }
    for (int k = S.size() - 1; k >= 0; k--) {
        cout << array[k];
    }
    cout << endl;
  }
  return 0;
}