#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration and input
    float l,w,h, vol;

        printf("\n Dimensions: \n\n");
        printf(" length = "), scanf("%f", &l);
        printf(" width = "), scanf("%f", &w);
        printf(" height = "), scanf("%f", &h);

    //processes and results
    vol= l*w*h;

        printf("\n volume = %.1f\n\n", vol);

    return 0;
}
