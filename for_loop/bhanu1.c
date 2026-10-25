// To print =      * 
//               * *
//              *  *
//             *   *
//            *    *


#include <stdio.h>

int main(){

    int i , n , j ;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(i = 0 ; i<n ; i++){
        for(j=n-1 ; j>=0 ; j--){
            if(j==0 || i == j)
               printf("* ");
            else
               printf("  ")
        }
    printf("\n")
    }

    return 0;
}