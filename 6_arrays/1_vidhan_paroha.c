#include <stdio.h>

int main(){
    int x[]= {24, 59, 23, 34, 56,89,69,97,21,27}, i, even_count=0, odd_count=0;
    int size= sizeof(x)/sizeof(x[0]);
    for(i=0;i<size;i++){
        if(x[i]%2==0)
            even_count++;
        else
            odd_count++;
    }
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    return 0;
}