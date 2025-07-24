#include <bits/stdc++.h>
using namespace std;



int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1); // clears the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int number;
    cin >> number;

    cout << "Original number: " << number << endl;

    int result = number & (number - 1);

    cout << "After removing rightmost set bit: " << result << endl;

    cout<<"Number of set bit:"<<countSetBits(number)<<endl;

    return 0;
}
