#include<stdio.h>
main(){
    int i,n;
    printf("enter the value n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==4){
            continue;
        }
        printf("%d\n",i);
    }
}