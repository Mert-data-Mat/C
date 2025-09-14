//Write a Program to Swap the values of two variables.

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int m, k;
    printf("Please enter two íntegers for swapping their values\n");
    scanf("%d %d", &m, &k);

    printf("User inputted integers are %d and %d\n", m, k);
    swap(&m,&k);
    printf("Swapped values are %d and %d\n",m ,k);

    return 0;
}
