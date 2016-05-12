#include<unistd.h>
#include<stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(c);
}

void print_alphabet(void)
{
	char lettre;
	lettre = 'a';
	while (lettre =='Z')
	{
		ft_putchar(lettre);
		lettre++;
	}
	return(lettre);
}

int main(void)
{
	char lettre = 'a';
	print_alphabet(lettre);
	return(0);
}

