#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int		ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);
}

void ft_print_reverse_alphabet(void)
{
	char lettre;
	lettre = 'z';
	char espace = '\n';
	while ( lettre != '`')
	{
		ft_putchar(lettre);
		lettre--;
	}
	ft_putchar(espace);
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
