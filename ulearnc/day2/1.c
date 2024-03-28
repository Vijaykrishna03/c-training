#include <stdio.h>
int main() {
    int x = 5, y = 3, z = 7;
    printf("%d\n", x * y % z);
 
    int a = 10, b = 3;
    printf("%d\n", a / b * 2);
 
    int c = 15, d = 4;
    printf("%d\n", c % d + c / d); 
    return 0;
}