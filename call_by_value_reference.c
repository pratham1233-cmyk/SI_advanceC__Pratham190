#include <stdio.h>

void callByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside callByValue: a = %d  b = %d\n", a, b);
}

void callByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside callByReference: a = %d  b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;

    printf("Before callByValue: x = %d  y = %d\n", x, y);
    callByValue(x, y);
    printf("After callByValue:  x = %d  y = %d\n", x, y);

    printf("\nBefore callByReference: x = %d  y = %d\n", x, y);
    callByReference(&x, &y);
    printf("After callByReference:  x = %d  y = %d\n", x, y);

    return 0;
}
