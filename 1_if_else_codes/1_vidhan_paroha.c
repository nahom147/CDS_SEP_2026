#include <stdio.h>

int main() {
    int age;

    printf("Apni age likho: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Aap vote kar sakte hain.\n");
    } else {
        printf("Aap abhi vote nahi kar sakte.\n");
    }

    return 0;
}