#include <stdio.h>
int main ()
{
    printf ("Enter size number of rows --->\n");
    int ro,co;
    scanf ("%d", &ro);
    
    printf ("Enter size number of columns --->\n");
    scanf ("%d", &co);
    int a[ro][co], b[ro][co], i,j;

    printf ("Enter elements for 1st matrix --->\n");
    for (i=0; i<ro; i++)
    {
        for (j=0; j<co; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }

    printf ("Enter elements for 2nd matrix --->\n");
    for (i=0; i<ro; i++)
    {
        for (j=0; j<co; j++)
        {
            scanf ("%d", &b[i][j]);
        }
    }
    printf ("\n\nResult \n\n");
    for (i=0; i<ro; i++)
    {
        for (j=0; j<co; j++)
        {
            a[i][j] -= b[i][j];
            printf ("%d   ", a[i][j]);
        }
        printf ("\n");
    }
}