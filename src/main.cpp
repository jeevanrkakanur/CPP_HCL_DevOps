#include <iostream>
#include "ReportService.h"

int main() {
    ReportService report;

    std::cout << "--- Integration Test (Multiple Components) ---" << std::endl;

    int result = report.generateReport(10, 5);

    std::cout << "Final Result: " << result << std::endl;

    return 0;
}
