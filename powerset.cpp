#include <bits/stdc++.h>
using namespace std;

// Generate and print all subsets (the power set) of `arr`
void printPowerSet(const vector<int> &arr) {
  int n = arr.size();
  // There are 2^n subsets
  int total = 1 << n;

  for (int mask = 0; mask < total; ++mask) {
    cout << "{ ";
    // For each bit position i, if bit i of mask is set, include arr[i]
    for (int i = 0; i < n; ++i) {
      if (mask & (1 << i)) {
        cout << arr[i] << " ";
      }
    }
    cout << "}\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  // Read number of elements
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  printPowerSet(arr);
  return 0;
}
