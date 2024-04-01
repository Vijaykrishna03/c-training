#include<stdio.h>
#include<string.h>
struct Message
{
    char name[100];
    char message[500];
};
void send_message()
{
    struct Message person;
    FILE *fptr=fopen("/mnt/c/Users/v578/Desktop/intern/ulearnc/filetest/message.txt","a");
    char name[100];
    char message[500];
    if(fptr==NULL)
    {
        printf("Error in creating the file");
        return;
    }
    printf("name : ");
    getchar();
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
     char line[600];
    if(fptr==NULL)
    {
        printf("Error in Opening the file\n");
        return;
    }
    struct Message person;
    while(fgets(line,sizeof(line),fptr))
    {
        printf("%s",line);
    }
    fclose(fptr);
}
int main()
{   
    int choice=4;
    while(choice!=2)
    {
    printf("\nEnter 0 to send a message, 1 to read all messages and 2 to exit:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
        send_message(); ;
        break;
    case 1:
        read_message();
        break;
    case 2:
        printf("thank you for using this program\n");
        return 0;
    default:
        printf("Kindly enter 0, 1 or 2 only.\n");
        break;
    }
    }
    return 0;
}