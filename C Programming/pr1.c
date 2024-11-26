#include <stdio.h>

int main(){

    char name[23];
    int age;

    printf("\nWhat's your name?");
    // scanf("%s", &name);
    fgets(name, 23, stdin);

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nyou are %d years old", age);

    return 0;
}