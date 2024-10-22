
#include<stdio.h>
main (){
    int a, b;
    printf ("enter value of a:");
    scanf("%d",&a);
    printf ("enter value of b:");
    scanf("%d",&b);
    printf("%d\n",--b);
    printf("%d\n",b);
    a>b?printf("a is big"):printf ("b is big");
}