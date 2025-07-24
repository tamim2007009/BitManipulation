#include <bits/stdc++.h>
using namespace std;

int main() {
  int number, pos;
  cin >> number >> pos;

  cout << "Original number: " << number << endl;

  // Set bit at position `pos`
  int setBitResult = number | (1 << pos);
  cout << "After setting bit at position " << pos << ": " << setBitResult
       << endl;

  // Toggle bit at position `pos`
  int toggleBitResult = number ^ (1 << pos);
  cout << "After toggling bit at position " << pos << ": " << toggleBitResult
       << endl;

  // Reset (clear) bit at position `pos`
  int resetBitResult = number & ~(1 << pos);
  cout << "After resetting bit at position " << pos << ": " << resetBitResult
       << endl;

  return 0;
}
