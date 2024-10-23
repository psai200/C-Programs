#include<stdio.h>
main(){
    int a=4,b=6,c=4;
    if(a>b){
        if(a>c){
            printf("%d is big ",a);
        }
        else{
            printf("%d is big ",c);
        }
    }
    else{
        if(b>c){
            printf("%d is big",b);
        }
        else{
            printf("%d is big",c);
        }
    } 

}