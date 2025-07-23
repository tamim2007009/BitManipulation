#include <bits/stdc++.h>
using namespace std;

int myPow(int x, int n) {
  long N = n;
  if (N < 0) {
    x = 1.0 / x;
    N = -N;
  }
  int ans = 1;
  while (N > 0) {
    if (N % 2 == 1) {
      ans = ans * x;
      N--;
    } else {
      x = x * x;
      N = N / 2;
    }
  }
  return ans;
}
int main() {

  int number;
  int pos;
  cin >> number >> pos;

  if (number & (1 << pos)) {
    cout << "Set bit" << endl;
  } else {
    cout << "Not a set bit" << endl;
  }


  //Another way
  //Here pow function returns double so create user defined pow function
  if (number & (myPow(2, pos))) {
    cout << "set bit" << endl;
  } else {
    cout << "Not a set bit" << endl;
  }

  return 0;
}