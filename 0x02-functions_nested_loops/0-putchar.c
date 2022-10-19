#include "main.h" 
/**
 * main - This program prints the phrase _putchar
 * Return: 0
 */
int main(void)
{
char string_[] = "_putchar";
	int i;

for (i = 0; string_[i] != '\0'; i++)
	{
		_putchar(string_[i]);
	}

_putchar('\n');
	return (0);
}
#include "main.h"


/**
  * print_alphabet -> prints the lowercase alphabets
  */

void print_alphabet(void)
{
    int j;

for (j = a ; j <= z ; j++)
    {
        _putchar(j);
    }
    _putchar (n);

}

