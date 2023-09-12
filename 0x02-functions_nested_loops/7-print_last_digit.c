#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number in question.
 * 
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
    int lastDigit = n % 10; // Get the last digit.

    // If the number is negative, convert the last digit to positive.
    if (lastDigit < 0)
        lastDigit *= -1;

    // Print the last digit.
    _putchar(lastDigit + '0');
    
    // Return the last digit.
    return (lastDigit);
}
