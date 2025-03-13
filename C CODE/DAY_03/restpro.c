#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define VEG_ITEMS 5
#define NONVEG_ITEMS 5

const char *vegMenuItems[VEG_ITEMS] = {"Veg Pulao", "Cheese Masala Dosa", "Ghee Roast Dosa", "Masala Dosa", "Plain Dosa"};
const char *nonvegMenuItems[NONVEG_ITEMS] = {"Ghee Rice + Kebab + Egg", "Biryani Rice + Kebab + Egg", "Chicken Biryani with Chicken Pepper Fry", "Full Meal Non-Veg", "Kebab"};
const int vegPrices[VEG_ITEMS] = {80, 100, 90, 85, 70};
const int nonvegPrices[NONVEG_ITEMS] = {150, 180, 220, 250, 100};

unsigned int quantity[VEG_ITEMS + NONVEG_ITEMS] = {0};
int totalBill = 0;

void welcome();
void menu();
void vegMenu();
void nonvegMenu();
void foodQuantity(int index, int isVeg);
void generateBill();

int main()
{
    welcome();
    menu();
    generateBill();
    return 0;
}

void welcome()
{
    printf("\n___________________________ 5-STAR ___________________________\n");
    printf("\n\t\t  What can we serve you today?\n");
}

void menu()
{
    char dietType;
    printf("\n\t\t   Veg (V) \t Non-Veg (N)\n");
    printf("\t\t   Enter your choice: ");
    scanf(" %c", &dietType);
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
        printf("Invalid choice. Please select V or N.\n");
        menu();
        break;
    }
}

void vegMenu()
{
    int choice;
    printf("\n                ||______________ VEG MENU _____________||\n");
    for (int i = 0; i < VEG_ITEMS; i++)
    {
        printf("%d. %s - Rs.%d\n", i + 1, vegMenuItems[i], vegPrices[i]);
    }
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= VEG_ITEMS)
    {
        foodQuantity(choice - 1, 1);
    }
    else
    {
        printf("Invalid choice. Try again.\n");
        vegMenu();
    }
}

void nonvegMenu()
{
    int choice;
    printf("\n                ||______________ NON-VEG MENU _____________||\n");
    for (int i = 0; i < NONVEG_ITEMS; i++)
    {
        printf("%d. %s - Rs.%d\n", i + 1, nonvegMenuItems[i], nonvegPrices[i]);
    }
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    
    if (choice >= 1 && choice <= NONVEG_ITEMS)
    {
        foodQuantity(choice - 1, 0);
    }
    else
    {
        printf("Invalid choice. Try again.\n");
        nonvegMenu();
    }
}

void foodQuantity(int index, int isVeg)
{
    int qty;
    printf("Enter quantity: ");
    scanf("%d", &qty);
    
    if (qty <= 0)
    {
        printf("Quantity should be at least 1. Try again.\n");
        foodQuantity(index, isVeg);
    }
    else
    {
        quantity[index] += qty;
        if (isVeg)
        {
            totalBill += qty * vegPrices[index];
        }
        else
        {
            totalBill += qty * nonvegPrices[index];
        }
    }

    char more;
    printf("Do you want to order more? (Y/N): ");
    scanf(" %c", &more);
    more = tolower(more);

    if (more == 'y')
    {
        menu();
    }
    else if (more == 'n')
    {
        printf("\n************* THANK YOU FOR ORDERING *************\n\n");
    }
    else
    {
        printf("Invalid choice. Try again.\n");
        foodQuantity(index, isVeg);
    }
}

void generateBill()
{
    printf("\n================= BILL =================\n");
    printf("Item\t\tQuantity\tPrice\n");
    printf("----------------------------------------\n");
    
    for (int i = 0; i < VEG_ITEMS; i++)
    {
        if (quantity[i] > 0)
        {
            printf("%s\t%d\tRs.%d\n", vegMenuItems[i], quantity[i], quantity[i] * vegPrices[i]);
        }
    }
    
    for (int i = 0; i < NONVEG_ITEMS; i++)
    {
        if (quantity[i] > 0)
        {
            printf("%s\t%d\tRs.%d\n", nonvegMenuItems[i], quantity[i], quantity[i] * nonvegPrices[i]);
        }
    }
    
    printf("----------------------------------------\n");
    printf("Total Bill: Rs.%d\n", totalBill);
    printf("========================================\n");
}