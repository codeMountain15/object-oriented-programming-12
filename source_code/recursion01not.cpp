// recursion01not.cpp
// use for loop instead
// of recursion

#include <iostream>
using namespace std;

int multiply(int m) {
    int result = 1;

    for (int i = 1; i <= m; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int input;
    cout << "Give a positive integer\n";
    cin >> input;

    cout << multiply(input);

    return 0;
}
