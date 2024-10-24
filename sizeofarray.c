#include<stdio.h>
 void main(){
    int a[10],i,n;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the arry \n");
    for(i=0;i<n;i++){
        scanf("%d\n",&a[i]);

    }
    printf("enter the array \n");
    for(i=0;i<n;i++){
        printf("%d\n ",a[i]);


    }
}
