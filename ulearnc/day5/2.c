#include <stdio.h>
#include <string.h>

int main() {
    char source[100]; 
    printf("Enter your sentence: ");
    scanf("%[^\n]", source);
    char *delimiters=" ";
    char* token = strtok(source, delimiters);
    char* longest=token;
    int count=0,avg=0;
    int ln=strlen(longest);
    int currentLength;
    while (token != NULL) {
        if(token ==NULL)
           break;
        currentLength= strlen(token);
        count=count+1;
        avg = avg+currentLength;
        if(currentLength>ln)
        {
            longest=token;
            ln=currentLength;
        }
        token = strtok(NULL, delimiters);
    }
    avg=avg/count;
    printf("the no of word is %d\n",count);
    printf("the average length od words is %d\n",avg);
    printf("the longest word is %s\n",longest);
    return 0;
}

