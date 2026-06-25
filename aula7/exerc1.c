#include <stdio.h>

int menor (int, int);

int main() {
    int x, y;

    printf("digite x:");
        scanf("%d", &x);

        printf("digite y:");
        scanf("%d", &y);

int menor(int x, int y) {
        if (x <= y) {
            return x;
        } else {
            return y;
        }
    }
    
    int resultado  = menor (x , y);
    printf( "o menor:  %d", resultado);
    return 0;
}