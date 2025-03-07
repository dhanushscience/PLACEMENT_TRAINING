/*************************************************************************************

Write a C program that takes an integer as input and prints its reverse.

Example:
Input: 1234
Output: 4321

Input: -567
Output: -765

Constraints:
The input number can be positive or negative.
You cannot use strings or arrays for storing the number.

************************************************************************************/

#include<stdio.h>

int main()
{
    unsigned int Num,i,j=0;

    printf("\n\n***NUMBER REVERSING CODE***\n");

    printf("\nEnter the Number for Reversing:\t");
    scanf("%d",&Num);
    
    printf("%d\n",isdigit(Num));

    for(i=Num ;i ;i/=10)
    {
        j = j*10 + (i%10); 
    }

    printf("%d\n\n",j);
    return 0; 
}

/*************************************************************************************
WOKRING EXAMPLE:

Input Value: 456

-> ITTERATION 1:

456%10 -> 6 is Extracted
456/10 -> 45 is Remaining
j = 0*10 + 6 [J has 6 now]

-> ITTERATION 2: [i/=10 threfore i = 45]

45%10 -> 5 is Extracted
45/10 -> 4 is Remaining
j = 6*10 + 5 [J has 65 now]

-> ITTERATION 3: [i/=10 threfore i = 4]

4%10 -> 4 is Extracted
4/10 -> 0 is Remaining
j = 65*10 + 4 [J has 654 now]

-> ITTERATION 3: [i/=10 threfore i = 0]

{Condition fails and return the reversed value}

************************************************************************************/