#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int q, n, i;

    scanf("%d", &q); //Reads the number of queries
    
    for(i = 1; i <= q; i++){
        scanf("%d", &n); //Reads the number of gears
        if(n % 2 == 0)   
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}
