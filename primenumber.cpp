#include<stdio.h>
main(){
    int n ,count=0;
    printf("enter the value of n:"); 
   scanf("%d",&n);
    for( int i=2;i<=n;i++){
        if(n%i==0){
            count ++;
        }
    }
        if(count==1){
            printf("is a prime");
        }
        else{
            printf(" is not prime");
        }
    
}