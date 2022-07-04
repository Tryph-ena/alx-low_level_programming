#include <stdio.h>
/**
 *main - entry point
 *program that prints the alphabet in lowercase
 *return: 0
 */
int main(void)
char alpha = 'a';
while (alpha <= 'z')
putchar(alpha);
alpha = alpha + 1;
putchar('\n');
return (0);
}
