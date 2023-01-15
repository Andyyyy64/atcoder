#include <iostream>

using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if (a == b - a || a == b - a - 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}