#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100]; 
    printf("Enter your password: ");
    scanf("%[^\n]", password);
    int length = strlen(password);
    if (length < 8) 
        {printf("Weak password: It must be at least 8 characters long.\n");
        return 0;
        }
    int hasUppercase = 0;
    int hasLowercase = 0;
    int hasDigit = 0;
    int hasSpecialChar = 0;
    for (int i = 0; i < length; i++) {
        char ch = password[i];

        if (isupper(ch)) 
            hasUppercase = 1;
        if (islower(ch)) 
            hasLowercase = 1;
        if (isdigit(ch)) 
            hasDigit = 1;
        if (strchr(" ", ch)) 
            {
                printf("there should be no space");
                return 0;
            }
        if(!isalnum(ch))
            hasSpecialChar = 1;
    }
    if (hasUppercase && hasLowercase && hasDigit && hasSpecialChar) 
        printf("Strong password\n");
     else 
        printf("Weak password: It must contain at least one uppercase letter, one lowercase letter, one digit, and one special character.\n");
    
    return 0;
}
