// recursion01.cpp
//

#include <iostream>
using namespace std;

int multiply(int m) {
    if (m - 1 > 0) {
        return m * multiply(m - 1);
    }
    else {
        return 1;
    }
}

int main() {
    int input;
    cout << "Give a positive integer\n";
    cin >> input;

    cout << multiply(input);

    return 0;
}
