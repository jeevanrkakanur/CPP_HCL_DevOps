#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    
    std::cout << "--- Jenkins Build Test ---" << std::endl;
    std::cout << "Addition (10 + 5): " << calc.add(10, 5) << std::endl;
    std::cout << "Subtraction (10 - 5): " << calc.subtract(10, 5) << std::endl;
    
    return 0;
}