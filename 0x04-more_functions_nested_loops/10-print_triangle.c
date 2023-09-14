#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
    int i, j, space;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        for (space = 0; space < size - i; space++)
        {
            _putchar(' ');
        }

        for (j = 0; j < i; j++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}
