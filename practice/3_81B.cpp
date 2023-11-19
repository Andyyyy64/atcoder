#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, cnt = 0, sum = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    while(true) {
        bool flag = false;
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 != 0) flag = true;
        }

        if(flag) break;

        for(int i = 0; i < n; i++) a[i] = a[i] / 2;
        sum++;
    }
    
    cout << sum << endl;
    return 0;
}