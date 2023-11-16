#include <stdio.h>

/**
 * Returns square of an  integer.
 *
 * @param n The integer to square
 * @return The square of the integer
 */
int square(int n) {
    return n * n;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int result = square(number);
    printf("The square of %d is %d\n", number, result);

    return 0;
}
