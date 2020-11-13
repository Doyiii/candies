#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declaring and Input weight on Earth
    float earth, mars, jupiter;

        printf("Enter your weight on Earth in lbs = ");
        scanf("%f", &earth);

    //Results
    mars= earth*.38, jupiter= earth*2.64;

        printf("\nMars = %.2f lbs", mars);
        printf("\nJupiter = %.2f lbs\n", jupiter);

    return 0;
}
