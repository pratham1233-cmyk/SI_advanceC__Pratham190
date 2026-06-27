#include <stdio.h>

int main()
{
    char str[100], result[100];
    int i = 0, j = 0, count;

    printf("Enter string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        result[j] = str[i];
        j++;

        if(count > 1)
        {
            result[j] = count + '0';
            j++;
        }

        i++;
    }

    result[j] = '\0';

    printf("Compressed String: %s", result);

    return 0;
}
