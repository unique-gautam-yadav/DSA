#include <stdio.h>
int main ()
{
    int a[3][3], i,j, sum=0;
    printf ("Enter 9 Elements -->\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("\n\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum += a[i][j];
        }
    }
    printf ("SUM = %d", sum);
}