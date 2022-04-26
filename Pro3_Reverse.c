#include <stdio.h>
int main ()
{
    int a[5],c=0,rev[5],i;
    printf ("Enter 5 Elements --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", & a[i]);
    }
    printf ("Reversed Array --->\n\n");
    for (i=4; i>=0; i--)
    {
        rev[c] = a[i];
        c++;
    }
    for (i=0; i<5; i++)
    {
        printf ("%d\t", rev[i]);
    }
}