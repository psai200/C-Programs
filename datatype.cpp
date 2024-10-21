#include<stdio.h>
main(){
    int  a,b,c,d,e,res=0;
    
    printf("enter value of a");
    scanf("%d", &a);
    printf("enter value of b");
    scanf("%d", &b);
    printf("enter value of c");
    scanf("%d", &c);
    printf("enter value of d");
    scanf("%d", &d);
    printf("enter value of e");
    scanf("%d", &e);
    res= a+b-c*d/e;
    printf("%d",res);
}