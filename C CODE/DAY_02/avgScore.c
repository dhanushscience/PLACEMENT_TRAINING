#include<stdio.h>

struct USN
{
    unsigned int studentUSN;
    float Average;
    unsigned char grade;
};

char averageScore();

int main()
{
    printf("\n\n***AVERAGE SCORE GRADE CODE***\n");

    struct USN student[100];
    int totalStudent;

    printf("\nEnter the Number of student:\t");
    scanf("%d",&totalStudent);

    for(int i=1; i <= totalStudent; i++)
    {
        printf("\nEnter %d Student the Avg Score:\t", i);
        student[i].studentUSN = i;
        scanf("%f",&student[i].Average);    

        printf("%hd\n",student[i].Average);
        student[i].grade = averageScore(student[i].Average);
        
        printf("%hhu", student[i].grade);
    }

    return 0;
}

char averageScore(int avgScore)
{
    printf("%hd\n",avgScore);

    if (avgScore >=0 && avgScore <=100)
    {
        if(avgScore >= 85 && avgScore < 100 )
        {
            return 'FIRST_CLASS';
        }
        
        if(avgScore >= 60 && avgScore < 85)
        {
            return 'SECOND_CLASS';
        }
        
        if(avgScore <= 40)
        {
            return 'FAIL';
        }
    }

    else
    {
        return 'INAVLID';
    }
}
