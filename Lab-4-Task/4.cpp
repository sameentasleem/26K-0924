#include <stdio.h>
int main()
{
    int n1, n2, n3, s;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    if (n1 < n2)
    {
        if (n1 < n3)
        {
            s = n1;
        }
        else
        {
            s = n3;
        }
    }
    else
    {
        if (n2 < n3)
        {
            s = n2;
        }
        else
        {
            s = n3;
        }
    }

    printf("\nSmallest number = %d", s);
}
