#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    int a, b, result, choice;
    bool exit = 0;

    while (!exit)
    {
        printf("Simple Calculator\n");
        printf("Choose operation\n1. Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Exit\n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4 )
        {
            printf("Enter two integers\n");
            scanf("%d %d", &a, &b);
            
        }
        if (choice == 1)
        {
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
        }
        else if (choice == 2)
        {
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
        }
        else if (choice == 3)
        {
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
        }
        else if (choice == 4)
        {
            if (b != 0)
            {
                result = a / b;
                printf("Result: %d / %d = %d\n", a, b, result);
            }
            else
            {
                printf("Error: Cannot divide by zero\n");
            }
        }
        else if (choice == 5)
        {
            exit = 1;
        }
        else
        {
            printf("Invalid Choice \n");
        }
    }
    return 0;
}