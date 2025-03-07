#include<stdio.h>

int averageScore();

int main()
{
    int avgScore;

    printf("\n\n***AVERAGE SCORE GRADE CODE***\n");

    printf("\nEnter the Avg Score:\t");
    scanf("%d",&avgScore);

    averageScore(avgScore);

    return 0;
}

int averageScore(int avgScore)
{
    if (avgScore >=0 && avgScore <=100)
    {
        if(avgScore >= 85 && avgScore < 100 )
        {
            printf("FIRST CLASS\n");
        }
        
        if(avgScore >= 60 && avgScore < 85)
        {
            printf("SECOND CLASS\n");
        }
        
        if(avgScore <= 40)
        {
            printf("FAIL\n");
        }
    }
    
    else
    {
        printf("INVALID\n");
    }

}
