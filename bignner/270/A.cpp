#include <iostream>
#include <string>
using namespace std;
int main() {
  string n;
  int result = 0;
  int tens = 1;
  cin >> n;
  int array[n.size()];
  for (int i = 0; i < n.size(); i++) {
    array[i] = n[i] - '0';
  }
  for (int i = n.size() - 1; i >= 0; i--) {
    result += array[i] * tens;
    tens *= 10;
  }
  if (result < 101) {
    cout << "1" << endl;
  } else if (result < 1001) {
    for (int i = 0; i < n.size(); i++) {
      if (array[1] == 0 && array[2] == 0) {
        if (i == n.size() - 1) {
          cout << array[0] << endl;
        }
      } else {
        if (i == n.size() - 1) {
          cout << array[0] + 1 << endl;
        }
      }
    }
  } else if (result < 2001) {
    for (int i = 0; i < n.size(); i++) {
      if (array[1] == 0 && array[2] == 0 && array[3] == 0) {
        if (i == n.size() - 1) {
          cout << 10 + array[1] << endl;
        }
      }
      if (i == n.size() - 1) {
        cout << array[1] + 11 << endl;
      }
    }
  } else if (result < 3001) {
    for (int i = 0; i < n.size(); i++) {
      if (array[1] == 0 && array[2] == 0 && array[3] == 0) {
        if (i == n.size() - 1) {
          cout << array[1] + 20 << endl;
        }
      }
      if (i == n.size() - 1) {
        cout << array[1] + 19 << endl;
      }
    }
  }
  return 0;
}