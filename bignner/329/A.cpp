#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++) {
        if(i % 2 == 0 && i != S.size() - 1) {
            S.insert(i + 1, " ");
        }        
    }
    cout << S << endl;
    return 0;
}