#include <stdio.h>

int soma(int x, int y) {
    printf("%p", x);
    printf("%p", y);
    return x + y;
}

int main() {
    int num1 = 5, num2 = 7;
    printf("%d", soma(num1, num2));
    printf("%d", num1, num2);

}