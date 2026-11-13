
/**
 * @file sample.cpp
 * @brief Demonstration of Doxygen documentation.
 * @author Althea
 * @date 2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function of the program.
 * @return 0 when execution is successful.
 */
int main() {
    int x = 10, y = 20;

    cout << "First Number: " << x << endl;
    cout << "Second Number: " << y << endl;
    cout << "Sum: " << add(x, y) << endl;

    return 0;
}
