#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  long long int N;
  string A, B;
  cin >> N;
  vector<long long int> ans(N);
  long long fin;
  long long find;
  cin >> A >> B;
  for (int i = 0; i < N; i++) {
    swap(A[i], B[i]);
    ans[i] = (stol(A) * stol(B));
    swap(A[i], B[i]);
  }

  fin = *min_element(ans.begin(), ans.end());
  find = fin % 998244353;
  cout << find << endl;
  return 0;
}