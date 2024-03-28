#include <stdio.h>
int main() {
    int x = 10, y = 20, z = 30;
    printf("%d\n", (x > y) ? (x < z) ? x : z : (y < z) ? y : z);
 
    int a = 10, b = 5;
    printf("%d\n", (++a, b++));
 
    int c = 5, d = 7;
    printf("%d\n", c += d *= 2); 
    return 0;
}