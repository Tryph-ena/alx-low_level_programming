#include <stdio.h>
/**
 *main - entry point
 *program that prints the alphabet in lowercase
 *return: 0
 */
int main(void)
{
char Capital_letter = 'A';
char Small_letter = 'a';
while (Small_letter <= 'z')
putchar(Small_letter);
Small_letter++;
putchar('\n');
return (0);
}
