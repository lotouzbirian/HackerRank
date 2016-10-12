#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int Q; 
    scanf("%d",&Q);
    int state;
    int spaces;
    int flag;
    for(int a0 = 0; a0 < Q; a0++){
        state = 1;
        spaces = 0;
        flag = 1;
        int n; 
        scanf("%d",&n);
        char* b = (char *)malloc(512000 * sizeof(char));
        scanf("%s",b);
    
        char letters[26] = {0};
        
        for(int i = 0; i < n; i++){
            if(b[i] != '_')
                letters[b[i] - 'A']++;
            else
                spaces++;
                
        }
        
        if(spaces == 0){ /* La única posibilidad es que ya sea feliz */
            for(int i = 1; i < n - 1 && flag; i++){
                if((b[i] != b[i + 1]) && (b[i] != b[i - 1]))
                    flag = 0;
            }
            if(flag == 0)
                state = 0;
        }
        else{
        for(int j = 0; j < 26; j++){
            if(letters[j] == 1)
                state = 0;
        }
        }
        printf("%s\n", state ? "YES" : "NO");
    }
    return 0;
}