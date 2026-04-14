#include "MathApp.h"

// (a + b) * (a - b)
int MathApp::computeExpression(int a, int b) {
    int sum = calc.add(a, b);
    int diff = calc.subtract(a, b);
    return calc.multiply(sum, diff);
}