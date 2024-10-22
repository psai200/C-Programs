#include <stdio.h>

int main() {
    int a, b ;

    printf("enter value of a: ");
    scanf("%d",&a);
     printf("enter value of b: ");
       scanf("%d",&b);
    printf("After increment a: %d\n", ++a);
    printf("After incremen at: %d\n", a++);
    printf("After increment: %d\n",++b);
    printf("After increment: %d\n", b++);

    return 0;
}
