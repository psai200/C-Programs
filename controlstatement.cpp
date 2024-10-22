#include<stdio.h>
main(){
    int age ;
   printf("enter the age :");
 scanf ("%d",&age);
    printf("eligible for driving lince or not");
    if (age >18){
        printf ("\neligible for driving lince" ,age);
    }
    else{
     printf ("\n not eligible for driving lince ",age);
    }
}