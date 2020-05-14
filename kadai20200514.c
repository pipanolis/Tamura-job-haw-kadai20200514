#include <stdio.h>
#include <math.h>

int main(void){
    int f[] = {0,0,0,0,0,0,0,0,0,0};
    f[0] = 0;
    f[1] = 1;

    int i;
    for(i=0; i<=7; i+=1){
        f[i+2] = f[i+1] + f[i];
    }

    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7], f[8], f[9]);

    return 0;
}