#include <iostream>
#include "MathApp.h"

int main() {
    MathApp app;

    std::cout << "--- Integration Test ---" << std::endl;

    int result = app.computeExpression(10, 5);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
