#include<stdio.h>
void main(){
    int marks[10],subjects,i,sum =0;
    float perc;
    printf("enter how many sujects");
    scanf("%d",&subjects);
    printf("enter the marks of subjects");
    for(i=0;i<subjects;i++){
        scanf("%d",&marks[i]);
    }
    printf("marks student :\n");
    for(i=0;i<subjects;i++){
        printf("%d\t",marks[i]);
    }
    printf("\n total marks of a studen :\n");
    for(i=0;i<subjects;i++){
        sum=sum+marks[i];

    }
    printf("%d",sum);
    perc=(sum/(float)(subjects * 100))*100;
    printf("percentage of a student is : %f", perc );

    
}