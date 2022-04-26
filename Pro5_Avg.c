#include <stdio.h>
int main ()
{
    int a[5],i;
    double sum=0;
    printf ("Enter 5 elements --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", & a[i]);
        sum += a[i];
    }
    printf ("Average=%lf", sum/5);
}