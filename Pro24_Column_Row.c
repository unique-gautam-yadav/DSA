#include <stdio.h>
int main ()
{
    int a[3][3], i,j,rs=0,cs=0;
    printf ("Enter elements for 1st Matrix --->\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf ("%d", &a[i][j]);
        }
        
    }
    printf ("\n\n");
    for (i = 0; i < 3; i++)
    {
        rs=0, cs=0;
        for (j = 0; j < 3; j++)
        {
            rs += a[i][j];
            cs += a[j][i];
        }
        printf ("%d %d\n", rs,cs);
    }
}