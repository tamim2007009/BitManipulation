#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapW(int &c, int &d) {

  c = c + d;
  d = c - d;
  c = c - d;
}

void swapX(int &x, int &y) {

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;
}

int main() {

  // With temp variable
  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b << endl;

  // Without temp variable.
  int c, d;
  cin >> c >> d;
  swapW(c, d);
  cout << c << " " << d << endl;

  // Using XOR operation
  int x, y;
  cin >> x >> y;
  swapW(x,y);
  cout << x << " " << y << endl;

  return 0;
}