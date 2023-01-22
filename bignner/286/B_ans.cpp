#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  while (true) {
    // Set fin to 1 as default
    bool fin = 1;
    // Iterate over each element in the string until the second to last one
    for (int i = 0; i < (int)s.size() - 1; i++) {
      // If the two consecutive characters in the string are 'na'
      if (s.substr(i, 2) == "na") {
        // Insert a 'y' in the ith position followed by 1
        s.insert(s.begin() + i + 1, 'y');
        // Set fin to 0 to break out of the loop
        fin = 0;
        break;
      }
    }
    // If fin is still 1, break out of the infinite loop
    if (fin)
      break;
  }
  // Output the final string
  cout << s << endl;
}