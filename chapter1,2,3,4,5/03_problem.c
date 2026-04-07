#include <stdio.h>

int main()
{
    float income, percentage, tax;
    printf("to calculate your income tax pls enter your salary\n");
    scanf("%f", &income);
    if (income <= 250000)
    {
        tax = 0;
        printf("your income tax is %f\n", tax);
    }
    else if (income <= 500000)
    {
        tax = 0.5 * income;
        printf("your income tax is %f\n", tax);
    }
    else if (income <= 100000)
    {
        tax = (10 / 100) * income;
        printf("your income tax is %f\n", tax);
    }
    else if (income > 100000)
    {
        tax = (30 / 100) * income;
        printf("your income tax is %f\n", tax);
    }
    return 0;
}