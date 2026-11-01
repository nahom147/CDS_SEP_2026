// Find the largest & smallest number in an array

#include <stdio.h>

int main(){

    int largest, smallest, i, ar[] = {145, 32, 678, 91, 456, 12, 890, 234, 567, 43, 999, 76, 321, 8, 765, 54, 432, 187, 654, 21};

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
