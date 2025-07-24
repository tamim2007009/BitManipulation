#include <bits/stdc++.h>
using namespace std;

int main() {

  // Minimum number of bits flip to convert a number

  int a, b;
  cin >> a >> b;
  int c = a ^ b;

  int cnt = 0;
  while (c != 0) {

    c = c & (c - 1);
    cnt++;
  }
  cout << cnt << endl;

  return 0;
}