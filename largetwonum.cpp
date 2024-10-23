#include<stdio.h>
main(){
    int a,b;
    printf("enter two numbers :");
    scanf("%d\n %d",&a,&b);
    if(a>b){
        printf("%d is big",a);
    }
    else if(b>a){
     printf("%d is big",b);
    }
    else{
        printf("both are equal");
    }
}