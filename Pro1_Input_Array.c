#include <stdio.h>
int main ()
{
    int a[5],i;
    printf ("Enter 5 Elements --->\n\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", & a[i]);
    }
    //Printing Array
    printf ("Entered Array --->\n");
    for (i=0; i<5; i++)
    {
        printf ("%d    ", a[i]);
    }
}