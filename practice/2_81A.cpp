#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    int cnt = 0;

    for(int i = 0; i < S.size(); i++) {
        if(S[i] == '1') cnt++;
    }
    cout << cnt << endl;
    return 0;
}

/*
全探索のもっとも簡単な例題

if(S[0] == '1') cnt++;
if(S[1] == '1') cnt++;
if(S[2] == '1') cnt++;

という風にもできる
*/