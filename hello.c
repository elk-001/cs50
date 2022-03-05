#include <cs50.h>
#include <stdio.h>


int main(void)
{
    printf("Hello!\n");

    string answer = get_string("whats your name?\n");
    
    printf("Hello %s\n", answer);


}
