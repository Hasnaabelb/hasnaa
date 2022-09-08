#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,moyenne;
 printf("Veuillez entrer les trois notes d'un etudiant de la faculte : ");
 scanf("%f%f%f",&N1,&N2,&N3);
 moyenne=(N1 +N2 +N3)/3;
 printf("la moyenne de cette etudiant est : %.2f\n",moyenne);
 if (moyenne<10)
    printf("la mention de cette etudiant est insuffisant ");
    else if (moyenne>=10&&moyenne<12)
    printf("la mention de cette etudiant est Passable ");
    else if (moyenne>=12&&moyenne<14)
    printf("la mention de cette etudiant est Assez bien ");
    else if (moyenne>=14&&moyenne<16)
    printf("la mention de cette etudiant est Bien ");
    else if (moyenne>=16)
    printf("la mention de cette etudiant est Tres bien");
    return 0;
}
