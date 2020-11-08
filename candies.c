#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Input weight of each candy type
    float kgA, kgB, kgC, kgD, cdA, cdB, cdC, cdD, total;

        printf ("Candy A kg = ");
        scanf ("%f", &kgA);

        printf ("Candy B kg = ");
        scanf ("%f", &kgB);

        printf ("Candy C kg = ");
        scanf ("%f", &kgC);

        printf ("Candy D kg = ");
        scanf ("%f", &kgD);

    //Breakdown and total amount of candies
    cdA = kgA*35.00, cdB = kgB*45.00, cdC = kgC*56.00, cdD = kgD*57.50, total = cdA+cdB+cdC+cdD ;

        printf ("\n Candy A = Php %.2f", cdA);
        printf ("\n Candy B = Php %.2f", cdB);
        printf ("\n Candy C = Php %.2f", cdC);
        printf ("\n Candy D = Php %.2f", cdD);
        printf ("\n\n Bag of Candies = Php %.2f \n", total);

    return 0;
}
