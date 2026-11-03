#include <stdlib.h>
#include <stdio.h>

int main()
{
   char prenom[50];
   int age;
   int annee = 2026;
  
    printf("Bonjour quelle est votre prenom ?\n");
    scanf("%49s",prenom);

    printf("Bonjour %s quelle est votre age ?\n",prenom);
    scanf("%d", &age);

    int fin_annee = annee - age - 1;
    int debut_annee = annee - age;

    printf("%s si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d.\n",prenom, fin_annee, debut_annee);


    exit(0);
}