#include <stdio.h>
int main() {
    int x = 10, y = 20;
    if (x = y)
        printf("x is equal to y\n");
    else
        printf("x is not equal to y\n");
 
    int a = 5, b = 10;
    printf("%d\n", (a > b) ? a : (b = a + 1));
 
    int num = 7;
    printf("%s\n", (num % 2 == 0) ? "Even" : (num > 5) ? "Greater than 5" : "Less than 5"); 
    return 0;
}