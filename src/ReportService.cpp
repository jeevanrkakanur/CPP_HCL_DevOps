#include "ReportService.h"

// Uses MathApp which internally uses Calculator
int ReportService::generateReport(int a, int b) {
    return app.computeExpression(a, b);
}
