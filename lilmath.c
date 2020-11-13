#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration and input
    int a, b, c, sum, diff, prod, quo, sqrs;

        printf("\nInput values in the following three variables:\n\n");
        printf("a = "), scanf("%d", &a);
        printf("b = "), scanf("%d", &b);
        printf("c = "), scanf("%d", &c);

    //processes and results
    sum= a+b+c, diff= a-b-c, prod= a*b*c, quo= a/b/c, sqrs= (a*a)+(b*b)+(c*c);

        printf("\nsum = %d", sum);
        printf("\ndifference = %d", diff);
        printf("\nproduct = %d", prod);
        printf("\nquotient = %d", quo);
        printf("\nsum of their squares = %d\n\n", sqrs);

    return 0;

}

