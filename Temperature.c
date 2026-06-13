#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int choice;

    // Display menu
    printf("===== Temperature Converter =====\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Check user's choice
    switch(choice)
    {
        case 1:
            // Convert Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

            printf("Temperature in Fahrenheit = %.2f F\n", fahrenheit);
            break;

        case 2:
            // Convert Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);

            celsius = (fahrenheit - 32) * 5 / 9;

            printf("Temperature in Celsius = %.2f C\n", celsius);
            break;

        default:
            // Invalid choice
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
