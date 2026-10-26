// print A 1 B 2 C

#include <stdio.h>

int main(){

    char x = 'A';
    int y = 1;
    int i;
    int n;

    printf("Enter Value: \n");

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d", y++);
        } else {
            printf("%c", x++);
        }
    }
    return 0;
}