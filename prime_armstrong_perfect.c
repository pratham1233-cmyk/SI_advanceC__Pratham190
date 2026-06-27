#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }
    return sum == n;
}

int isPerfect(int n) {
    if (n < 2) return 0;
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);

    if (isArmstrong(n))
        printf("%d is Armstrong\n", n);
    else
        printf("%d is not Armstrong\n", n);

    if (isPerfect(n))
        printf("%d is Perfect\n", n);
    else
        printf("%d is not Perfect\n", n);

    return 0;
}
