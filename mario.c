#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n;

    
      
        
    do{

         n=get_int("Width: ");

    }while(n<1);



    //another way to do this ^^
    //while(true){
    //n=get_int("Width: ");
    //if(n>0) break

    for(int i=0;i<n;i++){
        printf("? ");
    }
}