#include <stdio.h>
int main ()
{
    int a[2][3], b[3][2], c[3][3], i,j,k;
    printf ("Enter elements for first array --->\n");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf ("%d", & a[i][j]);
        }
    }
    
    printf ("Enter elements for second array --->\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<2; j++)
        {
            scanf ("%d", & b[i][j]);
        }
    }
    printf ("\n\nResult\n\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            for (k=0; k<3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i=0; i<3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf ("%d   ", c[i][j]);
        }
        printf ("\n");
    }
}