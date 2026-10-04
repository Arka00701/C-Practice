#include <stdio.h>

#define PER_LAPTOP 1000

int main(void)
{
    int age, hrs, rate, wage;

    printf("Enter age and hours: ");
    if (scanf("%d %d", &age, &hrs) != 2)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (age >= 20 && age <= 30)
    {
        rate = 5;
    }
    else if (age >= 31 && age <= 50)
    {
        rate = 10;
    }
    else if (age >= 51 && age <= 60)
    {
        rate = 3;
    }
    else
    {
        rate = 0;
    }

    wage = PER_LAPTOP * hrs * rate;
    printf("The wage of the employee is %d\n", wage);

    return 0;
}