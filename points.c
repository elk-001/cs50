#include <cs50.h>
#include <stdio.h>


    int main(void)
    {

        int points = get_int("How many points did you lose\n");



    if(points<2)
    {
        printf("You lost fewer points than me\n");

    }

    else if(points>2)
    {
        printf("You lost more points than me\n");
    }


    else
    {
        printf("you lost the same number points to me");
    }
    }