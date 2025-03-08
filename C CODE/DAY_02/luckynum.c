#include<stdio.h>

unsigned int luckyNum(unsigned int itarate);

int main()
{
    unsigned int itarate,sum;

    printf("Enter a number to find your LUCKY NUMBER: \t");
    scanf("%u",&itarate);
    sum = luckyNum(itarate);

    if(sum > 9)
    {
        sum = luckyNum(sum);
    }

    printf("Your lucky number is %u\n",sum);
}

unsigned int luckyNum(unsigned int itarate)
{
    unsigned int sum=0;

    for(itarate;itarate;itarate/=10)
    {
        sum += (itarate%10);
    }

    return sum;
}