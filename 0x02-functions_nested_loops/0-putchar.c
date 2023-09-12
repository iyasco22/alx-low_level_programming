#include "holberton.h" /* Assuming the header file is named holberton.h */

int main(void)
{
    char *s = "_putchar";
    int i = 0;

    while (s[i])
    {
        _putchar(s[i]);
        i++;
    }
    _putchar('\n');

    return (0);
}
