#include <stdio.h>
#include <math.h>

double power(double x, int n) {
    return pow(x, n);
}

double add(double x, int n) {
    return x + n;
}

double subtract(double x, int n) {
    return x - n;
}

double multiply(double x, int n) {
    return x * n;
}

double divide(double x, int n) {
    return x / n;
}

int main() {
    double x, result;
    int n, choice;

    printf("Enter a value for x: ");
    scanf("%lf", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Menu:\n");
    printf("1. Calculate Power (x^n)\n");
    printf("2. Add (x+n)\n");
    printf("3. Subtract (x-n)\n");
    printf("4. Multiply (x*n)\n");
    printf("5. Divide (x/n)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = power(x, n);
            printf("Power: %lf\n", result);
            break;
        case 2:
            result = add(x, n);
            printf("Addition: %lf\n", result);
            break;
        case 3:
            result = subtract(x, n);
            printf("Subtraction: %lf\n", result);
            break;
        case 4:
            result = multiply(x, n);
            printf("Multiplication: %lf\n", result);
            break;
        case 5:
            result = divide(x, n);
            printf("Division: %lf\n", result);
            break;
        default:
            printf("Invalid Choice. Please try again.\n");
    }

    return 0;
}

