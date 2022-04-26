#include <stdio.h>
int main ()
{
    int a[3][3], sum=0, i,j;
    printf ("Enter elements for Matrix -->\n");
    for (i=0; i<3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf ("%d", & a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum += a[i][i];
    }
    printf ("Sum = %d", sum);    
}