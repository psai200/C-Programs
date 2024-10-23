#include<stdio.h>
main(){
    int i,num;
    printf("enter the num:");
    scanf("%d",&num);
    printf("multiplication of %d :\n",num);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",num,i,num*i);
        
    }
}