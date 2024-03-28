#include <stdio.h>
 
int main() {
   char str[] = "Hello, Pointers!";
   char *ptr = str;
   printf("printing using pointers\n");
   while(*ptr !='\0') printf("%c",*ptr++);
   return 0;
}