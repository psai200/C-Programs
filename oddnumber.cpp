#include<stdio.h>
main(){
    int i,n;
    printf("enter the value n:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
    printf("%d is odd num",i);
    i=i+2;
    }
}