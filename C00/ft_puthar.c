#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/// main to test the function.
 
int main(void) 
{
    ft_putchar('A');
}