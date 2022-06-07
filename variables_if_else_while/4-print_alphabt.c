#include <stdio.h>
/**
 * main - Alphabet except p and e
 * Return: Except q and e
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}
