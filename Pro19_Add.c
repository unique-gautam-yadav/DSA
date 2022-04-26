#include <stdio.h>
int main ()
{
    int a[2][3], b[2][3],i,j;
    printf ("Enter elements of first Matrix -->\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    
    printf ("Enter elements of Second Matrix -->\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }
    printf ("\n\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            a[i][j] += b[i][j];
            printf ("%d   ", a[i][j]);
        }
        printf ("\n");
    }

}