#include <stdio.h>
int main()
{
    float n1, n2, result;
    char opt;
    printf("Enter first number: ");
    scanf("%f", &n1);
    printf("Enter second number: ");
    scanf("%f", &n2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &opt);
    switch (opt)
    {
        case '+':
            result = n1 + n2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = n1 - n2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = n1 * n2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (n2 != 0)
            {
                result = n1 / n2;
                printf("Result = %.2f", result);
            }
            else
            {
                printf("Cannot divide by zero.");
            }
            break;

        default:
            printf("Invalid operator.");
    }
}
