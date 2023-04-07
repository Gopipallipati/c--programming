 #include <stdio.h>
#include <math.h>

void generate_pythagorean_triples(int limit) {
    int a, b, c;
    for (a = 1; a < limit; a++) {
        for (b = a+1; b < limit; b++) {
            c = sqrt(a*a + b*b);
            if (c*c == a*a + b*b && c < limit) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }
}

int main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Pythagorean triples with values smaller than %d:\n", limit);
    generate_pythagorean_triples(limit);
    return 0;
}

