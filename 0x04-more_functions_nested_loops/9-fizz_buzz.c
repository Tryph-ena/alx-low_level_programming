#include <stdio.h>
#include "main.h"
/**
* main - prints the numbers from 1 to 100 followed by a new line
* for multiples of 3 print Fizz
* for multiples of 5 print Buzz
* for multipes of 3 and 5 print FizzBuzz
* Return: returns 0
*/

int main(void)
{
int m;
for (m = 1; m <= 100; m++)
{
if (m % 5 == 0 && m % 3 == 0)
printf("%s", "FizzBuzz");
else if (m % 3 == 0)
printf("%s", "Fizz");
else if (m % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", m);
if (m != 100)
printf(" ");
}
printf("\n");
return (0);
}
