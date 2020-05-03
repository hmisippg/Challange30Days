#include <stdio.h>

/*
   *
  ***
 *****

*
**
***

1
12
123
*/

int main(){
    int rows, k=0;
    printf("Masukan barisnya :");
    scanf("%d", &rows);

    // pengulangan
    for (int i = 1; i <= rows; i++, k=0)
    {
        for (int space = 1; space <= rows-i; space++){
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    
    
    return 0;
}