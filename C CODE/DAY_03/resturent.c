#include<stdio.h>
#include<ctype.h>
#include<string.h>

unsigned int quantity[5];
char food[1000];

void welcome();
char menu();
char vegMenu();
char nonvegMenu();
unsigned int foodQuantity(unsigned int menu);
void preparingFood(int items);
void ordering();

int main()
{
    welcome();
    menu();

    return 0;
}

void welcome()
{
    printf("\n________________________________5-STAR________________________________\n");
    printf("\n\n");
    printf("                ||______________MENU______________||\n\n");

    printf("\n\t\t  What can we Serve you today?\n");
}

char menu()
{
    char dietType;

    printf("\n\t\t   Veg \t\t Non-Veg\n");
    scanf(" %c",&dietType);

    dietType = tolower(dietType);

    switch (dietType)
    {
        case 'v':
            vegMenu();
            break;

        case 'n':
            nonvegMenu();
            break;
        
        default:
            printf("Please select a approriate option");
            menu();
            break;
    }
}

char vegMenu()
{
    char vegItem;

    printf("                ||______________VEG MENU______________||\n\n");
    printf("\n\n");
    printf("                 1. Veg Pulao\n");
    printf("                 2. Cheese Masala Dosa\n");
    printf("                 3. Ghee Roast Dosa\n");
    printf("                 4. Masala Dosa\n");
    printf("                 5. Plain Dosa\n");

    scanf(" %s", &vegItem);

    vegItem = tolower(vegItem);

    switch (vegItem)
    {
        case 'v':
        foodQuantity(1);
        ordering();
            break;

        case 'c':
        foodQuantity(2);
        ordering();
            break;
        
        case 'g':
        foodQuantity(3);
        ordering();
            break;

        case 'm':
        foodQuantity(4);
        ordering();
            break;

        case 'p':
        foodQuantity(5);
        ordering();
            break;
        
        default:
        printf("Please select a appropriate item\n");
        vegMenu();
            break;
    }

}

char nonvegMenu()
{
    char nonvegItem;

    printf("\n                ||______________NON-VEG MENU______________||\n");
    printf("\n");
    printf("                 1. Ghee Rice+Kebab [2 Pieces]+Egg\n");
    printf("                 2. Biryani Rice + Kebab [2 Pieces]+Egg\n");
    printf("                 3. Chicken Biryani with Chicken pepper Fry\n");
    printf("                 4. Full Meal non-veg\n");
    printf("                 5. Kebab\n");

    scanf("%c[^\n]", &nonvegItem);

    nonvegItem = tolower(nonvegItem);

    switch (nonvegItem)
    {
        case 'g':
        foodQuantity(1);
        ordering();
            break;

        case 'b':
        foodQuantity(2);
        ordering();
            break;
        
        case 'c':
        foodQuantity(3);
        ordering();
            break;

        case 'f':
        foodQuantity(4);
        ordering();
            break;

        case 'k':
        foodQuantity(5);
        ordering();
            break;
        
        default:
        printf("Please select a appropriate item\n");
        nonvegMenu();
            break;
    }
}


unsigned int foodQuantity(unsigned int menu)
{
    printf("\n\nQunatity: \t");
    scanf("%d", &quantity[menu]);
}

void preparingFood(int items)
{
    for(int i =0; i<sizeof(items);i++)
    {
        printf("\n%s - %02d no will be ready by 5 mins :) \n\n",food[i],quantity[i]);
    }
    
}

void ordering()
{
    char more;
    
    printf("Do you want anything more ?\n");
    scanf(" %c", &more);

    if(more == 'y')
    {
        menu();
    }
    
    if(more == 'n')
    {
        printf("\n************* THANK YOU FOR ORDERING *************\n\n");

    }

    else
    {
        printf("Please Select approriate option\n");

    }
}

