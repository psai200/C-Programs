#include<stdio.h>
main(){
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b ");
    scanf("%d",&b);
    if(a==b){
        printf("%d %d are equal");
    }
    
    else if (a>b){
        printf("%d is great then",a,b );
    }
    else{
        printf ("%d is lessthen",a,b);
    }
}