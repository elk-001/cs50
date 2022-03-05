#include <cs50.h>
#include <stdio.h>

    float discount(float x,float percent_off);
    int main(void)
    {

        float regular = (get_float("Regular price:\n"));

        float percent_off=get_float("Percent off:\n");

        float sale=discount(regular,percent_off);


        printf("%.3f\n",sale);


    }

    float discount(float x,float percent_off)
    {
        printf("function call\n");

        return x*(100-percent_off)/100;
    }