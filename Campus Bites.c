#include <stdio.h>

int main()
{
    int choice, price;
    int total = 0, count = 0;

    printf("\n");
    printf("====================================\n");
    printf("       CAMPUS BITES CAFE\n");
    printf("       Fresh Food, Happy Mood!\n");
    printf("====================================\n");

    printf("\n----------- FOOD MENU -------------\n");

    printf("1.  Margherita Pizza    Rs.180\n");
    printf("2.  Cheese Burger       Rs.120\n");
    printf("3.  Veg Momos            Rs.80\n");
    printf("4.  White Sauce Pasta   Rs.150\n");
    printf("5.  Masala Dosa         Rs.100\n");
    printf("6.  Paneer Sandwich     Rs.110\n");
    printf("7.  French Fries         Rs.70\n");
    printf("8.  Cold Coffee          Rs.90\n");
    printf("9.  Chocolate Shake     Rs.130\n");
    printf("10. Chole Bhature       Rs.120\n");

    printf("------------------------------------\n");
    printf("Enter 0 to finish your order.\n");

    while(1)
    {
        printf("\nSelect food item: ");
        scanf("%d", &choice);

        if(choice == 0)
        {
            break;
        }

        switch(choice)
        {
            case 1:
                price = 180;
                printf("Pizza added!\n");
                break;

            case 2:
                price = 120;
                printf("Cheese Burger added!\n");
                break;

            case 3:
                price = 80;
                printf("Veg Momos added!\n");
                break;

            case 4:
                price = 150;
                printf("Pasta added!\n");
                break;

            case 5:
                price = 100;
                printf("Masala Dosa added!\n");
                break;

            case 6:
                price = 110;
                printf("Paneer Sandwich added!\n");
                break;

            case 7:
                price = 70;
                printf("French Fries added!\n");
                break;

            case 8:
                price = 90;
                printf("Cold Coffee added!\n");
                break;

            case 9:
                price = 130;
                printf("Chocolate Shake added!\n");
                break;

            case 10:
                price = 120;
                printf("Chole Bhature added!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
                continue;
        }

        total = total + price;
        count++;
    }

    printf("\n");
    printf("====================================\n");
    printf("          FINAL BILL\n");
    printf("====================================\n");

    printf("Total Items Selected: %d\n", count);
    printf("Total Amount: Rs.%d\n", total);

    printf("------------------------------------\n");
    printf(" Thank you for visiting Campus Bites!\n");
    printf("       Visit Again!\n");
    printf("====================================\n");

    return 0;
}
