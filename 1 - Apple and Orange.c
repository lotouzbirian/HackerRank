#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int
isInHouse(int, int, int);

int
isInHouse(int s, int t, int d){
    return ((d >= s) && (d <= t));  
}


int main(){
    int aIn = 0, oIn = 0;
    int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       scanf("%d",&apple[apple_i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       scanf("%d",&orange[orange_i]);
    }
    
    for(int m_i = 0; m_i < m; m_i++){
        if(!(apple[m_i] < 0))
           aIn += isInHouse(s, t, apple[m_i] + a);
    }
    
    for(int n_i = 0; n_i < n; n_i++){
        if(!(orange[n_i] > 0))
           oIn += isInHouse(s, t, orange[n_i] + b);
    }
    
    printf("%d\n", aIn);
    printf("%d", oIn);
        
    return 0;
}
