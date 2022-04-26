#include <stdio.h>
int main()
{
    int a[5], i, in;
    printf("Enter 5 elements --->\n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", &a[i]);
    }
    printf ("Enter position from which do you want to delete element :-:");
    scanf ("%d", & in);
    in--;
    for (i=in; i<5; i++)
    {
        a[i]=a[i+1];
    }
    printf ("Final Array --->\n");
    for (i=0; i<4; i++)
    {
        printf ("%d\t", a[i]);
    }
}