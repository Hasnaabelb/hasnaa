#include <stdio.h>
#include <stdlib.h>

int main()
{
   float longeur,largeur;
   float S , P ;
   printf("Veuillez entrer la largeur de rectangle : ");
   scanf("%f",&largeur);
   printf("Veuillez entrer la longeur de rectangle : ");
   scanf("%f",&longeur);
   P = (largeur+longeur)*2;
   S = largeur * longeur ;
   printf("le perimetre du rectangle est : %.2f \n",P);
   printf("la surface du rectangle est : %.2f ",S);

    return 0;
}
