#include <stdio.h>
#include <stdlib.h>

int main()
{
   int T[10];
   int x,n,i;
   printf("Veuillez saisir les elements du tableau :\n ");
   for (i=0;i<10;i++){
   printf("T[%d]= ",i);
   scanf("%d",&T[i]);
   }

 printf("Veuillez saisir la valeur de n : ");
 scanf("%d",&n);
 x=0;
 for (i=0;i<10;i++){
 if(T[i]==n)
    x=x+1;
    }
    if(x==0)
    printf("%d se ne trouve pas dans le tableau",n);
    else
        printf("%d est se trouve dans le tableau",n);




    return 0;
}
