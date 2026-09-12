#include <stdio.h>
int main()
{
    float unit, bill, dsc, final;

    printf("Enter units consumed: ");
    scanf("%f", &unit);

    printf("Enter bill amount: ");
    scanf("%f", &bill);

    if (unit < 100)
    {
        dsc= bill * 0.10;
        final= bill - dsc;
        printf("10%% discount applied!!\n");
        printf("Discount = %.2f\n", dsc);
        printf("Final Bill = %.2f", final);
    }
    else
    {
        printf("No discount applied.\n");
        printf("Final Bill = %.2f", bill);
    }
}
