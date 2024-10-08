#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person *p = (struct Person *)malloc(sizeof(struct Person));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    strcpy(p->name, "Bob");
    p->age = 25;

    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    free(p);
    return 0;
}


