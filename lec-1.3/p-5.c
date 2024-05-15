#include <stdio.h>

main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age <= 12) {
        printf("You are a child.\n");
    } else if(age >= 13 && age <= 19) {
        printf("You are a teenager.\n");
    } else if(age >= 20 && age <= 64) {
        printf("You are an adult.\n");
    } else if(age >= 65) {
        printf("You are a senior.\n");
    } else {
        printf("Invalid age entered.\n");
    }

}
