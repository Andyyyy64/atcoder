#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  for (int j = 1; j < N; j++) {
    int cnt = 0;
    for (int i = 0; i + j < N; i++) {
      if (S[i] != S[j + i]) {
        cnt++;
      } else {
        break;
      }
    }
    cout << cnt << endl;
  }
}