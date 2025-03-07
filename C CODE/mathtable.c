#include<stdio.h>

short int mathTable();

int main()
{
    unsigned short num;
    printf("\n\n***MATH TABLE CODE***\n");

    printf("\nEnter a Number:\t");
    scanf("%d",&num);
    printf("\n");

    mathTable(num);

    return 0;
}

short int mathTable(int num)
{
    for(unsigned int short i =1; i<=10; i++)
    {
        printf("%02hu x %02hu = %02hu\n", num, i, num*i);
    }
}