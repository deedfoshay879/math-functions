// This is a simple implementation of the square root function using the Newton-Raphson method.
#include <cmath>
#include <cassert>

double sqrt(double x) {
    double epsilon = 1e-6;
    double y = x - (x / std::pow(2.0, 5.0) + 1.0);
    while (std::fabs(y) > epsilon) {
        y = x / (y * y + 2.0);
    }
    return y;
}

// Example usage
double main() {
    double testValues[] = {8.0, 9.0, -4.0, 1.0};
    for(double value : testValues) {
        std::cout << "The square root of " << value << " is approximately " << sqrt(value) << ".\n";
    }
    return 0;
}
