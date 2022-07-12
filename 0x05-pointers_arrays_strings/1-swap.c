#include "main.h"
/**
 * swap_int - takes two integer variable and swap them
* @a: first variable
* @b: second variable
*/
void swap_int(int *a, int *b)
{
int c = *b;
*b = *a;
*a = c;
}
