#include <stdio.h>
int main ()
{
    int a[5], b[5], i;
    printf ("Enter 5 elements --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
    }
    printf ("Copied Array --->\n");
    for (i=0; i<5; i++)
    {
        b[i] = a[i];
        printf ("%d\t", b[i]);
    }
}