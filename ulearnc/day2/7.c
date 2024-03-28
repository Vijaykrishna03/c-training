#include <stdio.h>
int main() {
    int age, no_of_books;
    scanf("%d %d",&age,&no_of_books);
    if(age<18)
        if(no_of_books>2)
         printf("Junior Member");
        else
         printf("Membership Status: Unknown");
    
    else if((age<=60))
        if(no_of_books<=3)
          printf("Regular Member");
        else
         printf("Membership Status: Unknown");
    else if(no_of_books<=5)
        printf("Senior Member");
    else
        printf("Membership Status: Unknown");
    return 0;
}