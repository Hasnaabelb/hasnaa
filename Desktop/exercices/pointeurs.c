#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T[6];
  int S;
  int *P;
  P=T;
  printf("Veuillez entrer 6 elements du tableaux : \n ");
  for(P=T ; P<T+6 ; P++){
    printf("T[%d] = ", P-T);
    scanf("%d",P);
  }
  S=0;
  for(P=T ; P<T+6 ; P++){
  S = S + *P ;
}
printf("La somme des elements du tableau est :%d ",S);

     return 0;
}
