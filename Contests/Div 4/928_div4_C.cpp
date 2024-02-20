#include <iostream>

using namespace std;

int digitSum(int num) {
    int total = 0;
    while (num > 0) {
        total += num % 10;
        num /= 10;
    }
    return total;
}

int sumOfDigitSums(int n) {
    int totalSum = 0;
    int tens = n / 10;
    int remainder = n % 10;
    totalSum += 45 * tens; // Sum of digit sums for each ten count
    // Adding sum of digits from 1 to remainder
    for (int i = 1; i <= remainder; ++i) {
        totalSum += digitSum(i);
    }
    return totalSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << sumOfDigitSums(n) << endl;
    }

    return 0;
}
