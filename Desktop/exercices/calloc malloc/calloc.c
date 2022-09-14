#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *n=calloc(1,sizeof(int));
    int *s =calloc (1,sizeof(int));
    int i;
    printf("Veuillez saisir un nombre : ");
    scanf("%d",n);
    *s=0;
    for(i=1;i<=*n;i+=2)
     *s=*s+i;
    printf("La somme des nombres impairs de 1 a %d est : %d ",*n,*s);
    free(n);
    free(s);
       return 0;
}
