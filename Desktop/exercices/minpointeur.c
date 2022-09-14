#include <stdio.h>
#include <stdlib.h>

int main()
{
  int T[10];
  int min;
  int *P;
  P=T;
  printf("Veuillez entrer 10 elements du tableaux : \n ");
  for(P=T ; P<T+10 ; P++){
    printf("T[%d] = ", P-T);
    scanf("%d",P);
  }
  min=*T;
  for(P=T+1 ; P<T+10 ; P++){
  min = *P ;
  if(min>*P)
    min=*P;
}
 printf("Le minimum des elements du tableau est :%d ",min);

     return 0;
}
