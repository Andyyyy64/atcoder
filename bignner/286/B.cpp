#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  int cnt = N;
  cin >> N;
  string S;
  cin >> S;
  if (S.length() == N) {
    for (int i = 0; i < N; i++) {
      if (S[i] == 'n' && S[i + 1] == 'a') {
        cout << "ny";
      }
      else cout << S[i];
    }
    cout << endl;
  }
}