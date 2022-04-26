#include <stdio.h>
int main ()
{
    int a[5], b[5], c[10], i, j=0;
    printf ("Enter 5 elements for first array. --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
    }
    printf ("Enter 5 elements for second array. --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", &b[i]);
    }
    for (i=0; i<10; i++)
    {
        if (i<5)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[j];
            j++;
        }
    }
    printf ("Merged Array --->\n");
    for (i=0; i<10; i++)
    {
        printf ("%d\t", c[i]);
    }
}