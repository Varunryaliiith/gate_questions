#include <stdio.h>

int main() {
    // Define a variable for x and the result
    double x;
    double result;

    printf("This program calculates the value of x(x+1)/(2x^2) for increasing values of x and shows how it tends to 1/2 as x tends to infinity.\n\n");

    // Loop through a range of values for x
    for (x = 1; x <= 1000000000000000; x *= 10) { // Increasing x by a factor of 10 each time
        // Calculate the value of the expression
        result = (x * (x + 1)) / (2 * x * x);

        // Print the result
        printf("For x = %.0f, x(x+1)/(2x^2) = %.15f\n", x, result);
    }

    return 0;
}

