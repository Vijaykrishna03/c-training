#include<stdio.h>
#include<string.h>
struct Person
{
    char name[100];
    char message[500];
};
void send_message()
{
    struct Person person;
    FILE *fptr=fopen("/mnt/c/Users/v578/Desktop/intern/ulearnc/filetest/message.txt","a");
    char name[100];
    char message[500];
    if(fptr==NULL)
    {
        printf("Error in creating the file");
        return;
    }
    printf("name : ");
    scanf("%[^\n]",person.name);
    getchar();
    printf("message : ");
    scanf("%[^\n]",person.message);
    getchar();
    fprintf(fptr,"\n%s :%s",person.name,person.message);
    fclose(fptr);
    printf("File updated Successfully\n");  

}

void read_message()
{
     FILE *fptr=fopen("/mnt/c/Users/v578/Desktop/intern/ulearnc/filetest/message.txt","r");
 
    if(fptr==NULL)
    {
        printf("Error in Opening the file");
        return;
    }
    struct Person person;
    while (!feof(fptr))
    {  
        fscanf(fptr,"%[^:] : %[^\n]",person.name,person.message);
        person.name[0]=' ';
        printf("name : %s message : %s\n",person.name,person.message);
    }
    fclose(fptr);
    printf("File Read Successfully"); 

}
int main()
{   
    
    send_message(); 
    read_message();
    return 0;
}