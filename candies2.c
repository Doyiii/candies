#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Input weight of each candy type
    float kgA, kgB, kgC, kgD;

        printf ("Candy A kg = ");
        scanf ("%f", &kgA);

        printf ("Candy B kg = ");
        scanf ("%f", &kgB);

        printf ("Candy C kg = ");
        scanf ("%f", &kgC);

        printf ("Candy D kg = ");
        scanf ("%f", &kgD);

    //Breakdown and total amount of candies
    float  total = (kgA*35.00)+(kgB*45.00)+(kgC*56.00)+(kgD*57.50);

        printf ("\nBag of Candies = Php %.2f \n", total);

    return 0;
}
