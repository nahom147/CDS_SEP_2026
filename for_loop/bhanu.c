// To print = * 
//            * *
//            *  *
//            *   *
//            *    *


#include <stdio.h>

int main(){

    int i , n , j ;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i = 0 ; i<n ; i++){
        for(j=0 ; j<n ; j++){
            if(j==0 || i == j)
               printf("* ");
            else
               printf("  ")
        }
    printf("\n")
    }

    return 0;
}