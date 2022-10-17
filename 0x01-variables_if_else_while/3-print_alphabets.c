#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success/correct)
 */
int main(void)
{
char i;
char j;

for (i = a; i <= z; i++)
{
putchar(i);
}
for (j = A; j <= Z; j++)
{
putchar(j);
}
putchar(n);
return (0);
}
#include <stdio.h> 
  
 /** 
  * main - Prints the alphabet in lowercase, and then in uppercase. 
  * 
  * Return: Always 0. 
  */ 
 int main(void) 
 { 
         char letter; 
  
         for (letter = a; letter <= z; letter++) 
                 putchar(letter); 
  
         for (letter = A; letter <= Z; letter++) 
                 putchar(letter); 
  
         putchar(n); 
  
         return (0); 
 }
