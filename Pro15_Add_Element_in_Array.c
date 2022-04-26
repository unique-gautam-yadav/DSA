//Program to insert a new element in a sorted array
#include <stdio.h>
int main ()
{
    int n,i, ne,in;
    printf("Enter The Number of elements in array :-: ");
    scanf ("%d", &n);
    int a[n];
    printf ("Enter %d elements in sorted way --->\n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",& a[i]);
    }
    printf("\nEnter a new element to be inserted :-: ");
    scanf ("%d", &ne);
    for (i=0; i<n; i++)
    {
        if (a[i]<ne)
        {
            in=i+1;
        }
        else
        {
            in=i;
            break;
        }
    }
    for(i=n; i>=in; i--)
        a[i] = a[i-1];
    a[in] = ne;
    printf("\n\nFinal Array --->\n");
    for (i=0; i<=n; i++)
        printf("%d\t", a[i]);
}