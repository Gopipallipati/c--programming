#include <stdio.h>
#include <math.h>

int binary_to_decimal(int num) {
    int decimal = 0, base = 1;

    while (num > 0) {
        int last_digit = num % 10;
        num /= 10;
        decimal += last_digit * base;
        base *= 2;
    }

    return decimal;
}

void decimal_to_octal(int num) {
    int octal = 0, base = 1;

    while (num > 0) {
        int last_digit = num % 8;
        num /= 8;
        octal += last_digit * base;
        base *= 10;
    }

    printf("Octal number: %d\n", octal);
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = binary_to_decimal(binary);
    printf("Decimal number: %d\n", decimal);

    decimal_to_octal(decimal);

    return 0;
}

