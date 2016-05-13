#include <unistd.h>

int ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);
}

void ft_print_number(void)
{
	char number = '1';
	char espace = '\n';
	while (number != ':')
	{
		ft_putchar(number);
		number++;
	}
	ft_putchar(espace);
}

int main(void)
{
	ft_print_number();
	return(0);
}
