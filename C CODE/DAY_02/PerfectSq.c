#include<stdio.h>

int squareRoot();

int main()
{
    int num;
    printf("\n\n***SQUARE ROOT CODE***\n");

    printf("\nEnter the Number:\t");
    scanf("%d",&num);

    squareRoot(num);

    return 0;
}

int squareRoot(int num)
{
    if(num % 10 == 0 || num % 10 == 1 || num % 10 == 4 || num % 10 == 6 ||num % 10 == 9)
    {
        printf("%d is Perfect Square\n",num);
    }

    else
    {
        printf("%d is not Perfect Square\n",num);
    }
    return 0;
}
