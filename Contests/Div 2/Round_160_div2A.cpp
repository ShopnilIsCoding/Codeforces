#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string ab;
        cin >> ab;
        long long int s = ab.length() / 2, i = 0;

        string firstLoopOutput;
        for (i; i < s;) {
            firstLoopOutput += ab[i];
            i++;
            if (ab[i] != '0')
                break;
        }

        string secondLoopOutput;
        for (; i < ab.length(); i++) {
            secondLoopOutput += ab[i];
        }

        int firstNumber = stoi(firstLoopOutput);
        int secondNumber = stoi(secondLoopOutput);

        if (firstNumber >= secondNumber || secondLoopOutput[0] == '0') {
            cout << "-1";
        } else {
            cout << firstNumber << " " << secondNumber;
        }

        cout << endl;
    }

    return 0;
}
