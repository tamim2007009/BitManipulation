#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;

    if (number > 0 && (number & (number - 1)) == 0) {
        cout << "The number is power of 2" << endl;
    } else {
        cout << "The number is not power of 2" << endl;
    }

    return 0;
}
