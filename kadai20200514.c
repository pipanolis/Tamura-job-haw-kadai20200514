#include <stdio.h>
#include <math.h>

#define NUMOFENTRIES 10
#define FIRST 0
#define SECOND 1

int main(void){
    
    int f[NUMOFENTRIES];
    f[0] = FIRST;
    f[1] = SECOND;
    
    for(int i = 0; i < (NUMOFENTEIS - 2); i += 1){
        f[i+2] = f[i+1] + f[i];
    }
    
    for(int i = 0; i < NUMOFENTEIS; i += 1){
       printf("%d\n", f[i]);
    }

    return 0;
}
