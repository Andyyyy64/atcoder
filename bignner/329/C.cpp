#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int length = 1;

    for(int i = 0; i < n; i++) {
        if(s[i] == s[i + 1]) {
            length++;
        } else {
            cnt += length;
            length = 1;
        }
    }

    cnt += length;

    if(n == 1) {
        cout << 1 << endl;
    } else {
        cout << cnt << endl;
    }
        
    return 0;
}