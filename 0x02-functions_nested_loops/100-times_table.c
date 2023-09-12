#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table, starting with 0
 * @n: integer argument for the function
 * Return: void
 */
void print_times_table(int n)
{
    int i, j, prod;

    if (n >= 0 && n <= 15)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                prod = i * j;

                if (j != 0)
                {
                    if (prod < 10)
                    {
                        printf(",   ");
                    }
                    else if (prod < 100)
                    {
                        printf(",  ");
                    }
                    else
                    {
                        printf(", ");
                    }
                }
                printf("%d", prod);
            }
            printf("\n");
        }
    }
}
