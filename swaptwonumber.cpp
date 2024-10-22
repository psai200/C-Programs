#include<stdio.h>
main(){
    int a=5,b=6;
    printf("before swap ");
    printf("%d  %d",a,b);
    a=a+b;
    b=a-b;
    a=b-a;
    
    printf("\nafer swaping");
    printf("%d %d",a,b);

}
