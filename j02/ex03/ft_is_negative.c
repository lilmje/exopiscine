#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write (1, &c, 1);
	return(0);
}

void ft_is_negative(int n)
{
	char negatif = 'N';
	char positif = 'P';
	char espace = '\n';
	if(n < 0)
		ft_putchar(negatif);
	else
		ft_putchar(positif);
	ft_putchar(espace);
}

int main(void)
{
	int n;
	scanf("%d", &n);
	ft_is_negative(n);
	return(0);
}
