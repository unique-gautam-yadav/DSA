//Program to insert a new element in a sorted array
#include <stdio.h>
int main ()
{
    int n,i, ne,in;
    printf("Enter The Number of elements in array :-: ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter %d elements  --->\n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",& a[i]);
    }
    printf ("Enter new element to be added in array :-: ");
    scanf ("%d", &ne);
    printf ("Enter Position on which you want to store --->\n");
    scanf ("%d", &in);
    in=in-1;
    for(i=n; i>=in; i--)
        a[i] = a[i-1];
    a[in] = ne;
    printf("\n\nFinal Array --->\n");
    for (i=0; i<=n; i++)
        printf("%d\t", a[i]);
}