#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n); //Input for Array Size
    int a[n];

    //Taking Array Inputs
    printf("Enter values:\n\n");
    for(int i = 0; i<n; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int rep;

    //Ascending Order
    printf("Ascending Order: ");
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                //Ascending Order
                rep = a[i]; 
                a[i] = a[j];
                a[j] = rep;
            }
        }
        printf("%d ", a[i]);
    }
    printf("\n");

    //Descending Order
    printf("Desceding Order: ");
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                //Descending Order
                rep = a[i];
                a[i] = a[j];
                a[j] = rep;
            }
        }

        printf("%d ", a[i]);
    }

    return 0;
}
