#include <stdio.h>
#include "condition.h"

void verifierSalaire(int salaire)
{
	if (salaire < 3000)
		printf("trop cracra");

	else if (salaire >= 3000 && salaire <= 5000)
		printf("oulaaaaa viens la");
	else if (salaire > 5000)
		printf("Mec, on est fait pour etre ensemble");
}

int main(int argc, char** argv)
{
	int age = 0;
	int salaire = 0;

	printf("rentre ton age \n");
	scanf_s("%d", &age);
	printf("rentre ton salaire ");
	scanf_s("%d", &salaire);

	if (age >= 90)
		printf("AAAAAAAA rentre dans ta maison de retraite\n");
	else if (age >= 17 && age <= 25)
		printf("Age parfaittttttt come\n");
	else if (age == 33 || age == 55)
		printf("ehhhhhhhh tu porte malheur part\n");
	else if (age >= 20)
		printf("OULALALA tu es top vieux, interdiction de passe vieux crouton\n");
	else
		printf("Tu peux passer grrrr\n");
	
	verifierSalaire(salaire);

	return 0;
}

void conditionsBooleenes()
{
	int age = 20;
	int majeur = 18;

	if (age >= majeur);
	else;

	int age2 = 18;
	int majeur2 = (age2 >= 18);

	if (majeur);
	else;
	
}
/*
if (age == 2)
{
	printf("Salut bebe !");
}
else if (age == 6)
{
	printf("Salut gamin !");
}
else if (age == 12)
{
	printf("Salut jeune !");
}
else if (age == 16)
{
	printf("Salut ado !");
}
else if (age == 18)
{
	printf("Salut adulte !");
}
else if (age == 68)
{
	printf("Salut papy !");
}
else
{
	printf("Je n'ai aucune reponse pour ton age");
}

c'est pareilllll

switch (age)
{
case 2:
  printf("Salut bebe !");
  break;
case 6:
  printf("Salut gamin !");
  break;
case 12:
  printf("Salut jeune !");
  break;
case 16:
  printf("Salut ado !");
  break;
case 18:
  printf("Salut adulte !");
  break;
case 68:
  printf("Salut papy !");
  break;
default:
  printf("Je n'ai aucune reponse pour ton age");
  break;*/