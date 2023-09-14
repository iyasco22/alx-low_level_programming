#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143.
 * Return: Always 0.
 */
int main(void)
{
    long int num = 612852475143;
    long int div = 2, maxPrime;

    while (num != 0)
    {
        if (num % div != 0)
            div = div + 1;
        else
        {
            maxPrime = num;
            num = num / div;
            if (num == 1)
            {
                printf("%ld\n", maxPrime);
                break;
            }
        }
    }
    return (0);
}
