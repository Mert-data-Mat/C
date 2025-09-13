//Write a Program to find the size of int, float, double, and char.

#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char d;

    printf("Size of int is %lu bytes\n", sizeof(a));
    printf("Size of float is %lu bytes\n", sizeof(b));
    printf("Size of double is %lu bytes\n", sizeof(c));
    printf("Size of char is %lu bytes\n", sizeof(d));

    return 0;
}
