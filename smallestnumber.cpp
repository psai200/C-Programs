#include<stdio.h>
main(){
    int a,b,c;
    printf("enter value for a,b,&c");
    scanf("%d \n%d\n%d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("%d is small",a);
        }
        else{
            printf("%d is small",c);
        }
        }
        else{
            if(b<c){
                printf("%d is small",b);
            }
            else{
                printf("%d is small",c);
            }
        }
    
}