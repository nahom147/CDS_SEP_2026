// Find the largest & smallest number in an array

#include <stdio.h>

int main(){

    int largest, smallest, i, ar[] = {24, 59, 23, 34, 56, 89, 69, 97, 21, 27};

    int size = sizeof(ar) / sizeof(ar[0]);

    largest = ar[0];
    smallest = ar[0];

    for(i = 1; i < size; i++){
        if(ar[i] > largest)
            largest = ar[i];
        else if(ar[i] < smallest)
            smallest = ar[i];
    }

    printf("Largest Value: %d\n", largest);
    printf("Smallest Value: %d", smallest);

    return 0;
}