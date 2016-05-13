#include<unistd.h>			/*Il faut ajouter un espace entre include et <unistd.h>*/
#include<stdio.h>			/*Il faut ajouter un espace entre include et <stdio.h>*/

int ft_putchar(char c)		/*Normalement cette fcontion et de type void et ne retourne rien*/
{
	write(1, &c, 1);
	return(c);
}

void print_alphabet(void)
{
	char lettre;
	lettre = 'a';

	while (lettre =='Z')	/*FAUX: la boucle sera éxécutée que lorsque lettre sera égale à Z*/
	{
		ft_putchar(lettre);
		lettre++;
	}
	return(lettre);			/*FAUX: Fonction void donc pas de return*/
}

int main(void)
{
	char lettre = 'a';
	print_alphabet(lettre);	/*FAUX mauvaix prototypage de la fonction, elle ne prend pas d'argument*/
	return(0);
}

