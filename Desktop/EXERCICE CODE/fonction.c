#include <stdio.h>
#include <stdlib.h>
int L ,i, j;
void lataille (){
   printf("Veuillez entrer le nombre de lignes : ");
    scanf("%d",&L);
}
void triangle (){
     for(i=1;i<=L;i++){
      for(j=1;j<=L-i;j++){
          printf("  ");
    }
    for(j=1;j<= (2*i-1);j++){
      printf("* ");
    }
    printf("\n");
    }
}

int main()
{
    lataille ();
    triangle ();


    return 0;
}
