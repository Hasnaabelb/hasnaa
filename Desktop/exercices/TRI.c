#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int t[7] = {68, 0, 5, -2, 500, 34, -9};

    for (i = 0; i < 7; i++)
    {
        int min = i;
        for ( j = i; j < 7; j++)
            if (t[j] <= t[min])
                min = j;
        if (i != min)
        {
            int tmp = t[i];
            t[i] = t[min];
            t[min] = tmp;
        }
    }
    for(i=0;i<7;i++){
        printf("%d\n",t[i]);
    }

    return 0;
}
