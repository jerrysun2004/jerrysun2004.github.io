#include <iostream>

int main() {
    int a = 5;
    int b;
    int result = a + b; // Error: b is uninitialized

    std::cout << "Result: " << result << std::endl;
    return 0;
}

