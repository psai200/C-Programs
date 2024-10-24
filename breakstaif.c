#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("----start---\n");
      for(j=1;j<=n;j++){
        if(i==6){
            printf("Inside i variable break statement");
            break;
        }
         if(j==2){
             printf("Inside j variable break statement\n");
             continue;
         }
        
         printf("%d\n",i);
        }
        printf("----end---\n");
    }
    
        
    
} 