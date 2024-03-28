#include <stdio.h>
void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
 
int main() {
   int x = 10, y = 20;
    printf("before x=%d,y=%d\n",x,y);
   swap(&x,&y);
   printf("swaped no x=%d,y=%d\n",x,y);
   return 0;
}