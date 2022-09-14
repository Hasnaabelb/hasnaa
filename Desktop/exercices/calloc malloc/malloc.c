#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *pr=malloc(sizeof(float));
    float *pv = malloc (sizeof(float));
    float *prix=malloc(sizeof(float));
    printf("Veuillez saisir le prix de revient : ");
    scanf("%f",pr);
    printf("Veuillez saisir le prix de vente : ");
    scanf("%f",pv);
    if (*pr > *pv){
        *prix=*pr-*pv;
        printf("Perte = %.2f",*prix);
    }
else if (*pr < *pv){
    *prix = *pr-*pv;
    printf("Gain = %.2f",*prix);
}
else{
    printf("Ni Gain ni Perte . ");
}
free(pr);
free(pv);
free(prix);
       return 0;
}
