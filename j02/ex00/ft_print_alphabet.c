#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_alphabet(void)
{
	char lettre;
	lettre = 'a';
	char espace = '\n';
	while (lettre !='{')
	{
		ft_putchar(lettre);
		lettre++;
	}
	ft_putchar(espace);
}

int		main(void)
{
	ft_print_alphabet();
	return(0);
}

