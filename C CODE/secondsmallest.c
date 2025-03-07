#include <stdio.h>

int main(void) 
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);

    while (n > 9)
        n = (n % 10) + (n / 10);

    printf("Lucky number: %u\n", n);
    return 0;
}


/*
    888

    88 + 08 = 96
    09 + 06 = 15
    01 + 05 = 06
*/