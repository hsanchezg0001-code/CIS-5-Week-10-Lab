// Lab 10: Mutate via reference (pointers and references)
// CIS 5 - Week 10
// Author: Herberth Sanchez-Gomez

#include <iostream>

using namespace std;

// Swaps the values of two integers using pass-by-reference
void swap_values(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 3;
    int y = 7;

    // 1. Show values before swap
    cout << "Before: " << x << " " << y << "\n";

    // 2. Call swap_values (modifies x and y directly in main)
    swap_values(x, y);

    // 3. Show values after swap
    cout << "After: " << x << " " << y << "\n";

    // 4. One pointer read: point p at x and read its value
    int* p = &x;
    cout << "x via pointer: " << *p << "\n";

    return 0;
}