#include <stdio.h>

void reverse() {
    char c;
    scanf("%c", &c);
    if (c != '\n')
        reverse();
    if (c != '\n')
        printf("%c", c);
}

int main() {
    printf("Enter a sentence: ");
    reverse();
    printf("\n");
    return 0;
}
