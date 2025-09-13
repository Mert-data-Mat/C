//Write a Program to find the Sum of two numbers entered by the user.

#include <stdio.h>


int sum(int x, int y)
{
    return (x + y);
}

int main()
{
    int a, b = 0;

    printf("Enter two integers with space between them for getting their sum :\n");
    scanf("%d %d", &a, &b);

    printf("Sum of your integers are: %d\n", a + b);
    return 0;
}
