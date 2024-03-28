#include <stdio.h>
int main() {
    int x = 10;
    x &= 3;
    printf("%d\n", x);
 
    int a = 5;
    a <<= 2;
    printf("%d\n", a); 
    return 0;
}