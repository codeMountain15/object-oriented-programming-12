// Fibonacci.cpp
//

#include <iostream>
using namespace std;

int fibonacci(int input) {
    if ((input == 1) || (input == 0)) {
        return(input);
    }
    else {
        return(fibonacci(input - 1) + fibonacci(input - 2));
    }
}

int main() {
    int x, i = 0;
    
    // 0, 1 and then each number is equal to
    // the sum of the previous two numbers
    
    cout << "Enter the number of terms of series : ";
    cin >> x;

    cout << "The Fibonnaci list of integers: ";
        while (i < x) {
            cout << ", " << fibonacci(i);
            i++;
        }

    return 0;
}
