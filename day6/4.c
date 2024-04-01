#include<stdio.h>
#include<string.h>
struct Record
{   int id;
    char name[100];
    int math;
    int sci;
    int eng;

};
void create_record()
{
    struct Record student;
    FILE *fptr=fopen("/mnt/c/Users/v578/Desktop/intern/ulearnc/filetest/student_records.txt","a");
    if(fptr==NULL)
    {
        printf("Error in creating the file");
        return;
    }
    getchar();
    printf("student id : ");
    scanf("%d",&student.id);
    getchar();
    printf("student name : ");
    scanf("%[^\n]",student.name);
    getchar();
    printf("student math grade : ");
    scanf("%d",&student.math);
    printf("student science grade : ");
    scanf("%d",&student.sci);
    printf("student english grade : ");
    scanf("%d",&student.eng);
    fprintf(fptr,"\n%d,%d,%d,%d,%s",student.id,student.math,student.sci,student.eng,student.name);
    fclose(fptr);
    printf("File updated Successfully\n");  

}

void read_record()
{
     FILE *fptr=fopen("/mnt/c/Users/v578/Desktop/intern/ulearnc/filetest/student_records.txt","r");
     char line[600];
    if(fptr==NULL)
    {
        printf("Error in Opening the file\n");
        return;
    }
    struct Record student;
    while (!feof(fptr))
    {   float avg;
        fscanf(fptr,"\n%d,%d,%d,%d,%[^\n]",&student.id,&student.math,&student.sci,&student.eng,student.name);
        printf(" id : %d \n name: %s\n math grade: %d \n science grade: %d \n english grade: %d \n",student.id,student.name,student.math,student.sci,student.eng);
        avg=student.math+student.sci+student.eng;
        avg/=3;
        printf(" avg grade: %f\n",avg);
        printf("----------------------\n");
    }
    fclose(fptr);
    printf("File Read Successfully"); 
}
int main()
{   
    int choice=4;
    while(choice!=2)
    {
    printf("\nEnter 0 to create record, 1 to read all record and 2 to exit:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
        create_record(); ;
        break;
    case 1:
        read_record();
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