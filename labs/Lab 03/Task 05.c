#include <stdio.h>
int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    (a > 0) ? printf("%d is Positive\n", a) : //(num > 0) ----> if true ----> prints Positive.
    (a < 0) ? printf("%d is Negative\n", a) : //(num < 0) ----> if true ----> prints Negative.
	printf("The number is Zero\n");

    return 0;
}
