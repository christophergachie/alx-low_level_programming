#include <unistd.h>
/**
* main -Entry point of the program
* @c - outputs a single character to the screen
* Description: This function writes the character 'c' to the standard output.
*             It is commonly used to print individual characters.
*
* Return: On success, returns the character written. On error, returns -1.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
void print_alphabet_x10(void);
void print_alphabet_x10(void){
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <=  'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}