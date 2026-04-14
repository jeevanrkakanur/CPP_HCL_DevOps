#ifndef MATHAPP_H
#define MATHAPP_H

#include "calculator.h"

class MathApp {
private:
    Calculator calc;

public:
    int computeExpression(int a, int b);
};

#endif