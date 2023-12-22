#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include <time.h>
#include<windows.h>
int i,j,main_exit;
void menu();
void new_entry();
void edit();
void view_list();
void erase();
void see();
void sorter();
void closer();
void Menu();
void Add();
void view();
void search();
void modify();
void deleterec();
void student();
void menust();
void library();
void addBook();
void booksList();
void del();
void issueBook();
void issueList();
struct date{
int month,day,year;
};
struct student
{
    char name[20];
    char mobile[10];
    int rollno;
    char course[20];
    char branch[20];
};
struct books{
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
}b;

struct Student{
    int id;
    char sName[50];
    char sClass[50];
    int sRoll;
    char bookName[50];
    char date[12];
}s;
struct {
char name[120];
int age;
char city[120];
char mail_id[60];
char room_no[8];
char father_name[60];
int father_phone_no[11];
int phone_no[11];
char hostel_name[6];
char hostel_id[10];
struct date dob;
int rent_paid;
}add,upd,check,rem,sort;

int main(){
system("color 0b");
pass();
Menu();
return 0;
}
void Menu(){
int choice;
    system("cls");
    system("color b0");
    delay(200);
    gotoxy(100,3);
    printf("<<<<<<<<   MENU   >>>>>>>>");
    gotoxy(10,7);
    printf("Enter appropriate number to perform following task.");
    gotoxy(10,12);
    delay(100);
    printf("\xB10 : Student Record.");
    gotoxy(10,14);
    delay(100);
    printf("\xB10 : Hostel Record.");
    gotoxy(10,16);
    delay(100);
    printf("\xB10 : Library Record.");
    gotoxy(10,18);
    delay(100);
    printf("\xB10 : Exit.");
    gotoxy(10,20);
    printf("Enter your choice.");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        menust();
        break;

    case 2:
        menu();
        break;

    case 3:
        library();
        break;
    case 4:
        exit(1);
    default:
        gotoxy(10,17);
        printf("Invalid Choice.");
    }

}
void menust()
{
system("CLS");
int choice;
system("color 07");
printf("\n\n\t\t\t\tSTUDENT RECORDS MANAGEMENT");
printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Enter new Student[1] \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  View student information[2] \xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Search student details [3] \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Modify Student Details[4] \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Remove existing Student[5] \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Exit [6]  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\n \t\t Today is: ");
    tm();//time call
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        Add();
        break;

    case 2:
        view();
        break;

    case 3:
        search();
        break;

    case 4:
        modify();
        break;

    case 5:
        deleterec();
        break;

    case 6:
        Menu();
        break;

    default:
        gotoxy(10,17);
        printf("Invalid Choice.");
    }
}
void Add()
{
    FILE *fp;
    struct student std;
    char another ='y';
    system("cls");

    fp = fopen("record.txt","ab+");
    if(fp == NULL){
        gotoxy(10,5);
        printf("Error opening file");
        exit(1);
    }
    fflush(stdin);
    while(another == 'y')
    {
        gotoxy(10,3);
        printf("<--:ADD RECORD:-->");
        gotoxy(10,5);
        printf("Enter details of student.");
        gotoxy(10,7);
        printf("Enter Name : ");
        gets(std.name);
        gotoxy(10,8);
        printf("Enter Mobile Number : ");
        gets(std.mobile);
        gotoxy(10,9);
        printf("Enter Roll No : ");
        scanf("%d",&std.rollno);
        fflush(stdin);
        gotoxy(10,10);
        printf("Enter Course : ");
        gets(std.course);
        gotoxy(10,11);
        printf("Enter Branch : ");
        gets(std.branch);
        fwrite(&std,sizeof(std),1,fp);
        gotoxy(10,15);
        printf("Want to add of another record? Then press 'y' else 'n'.");
        fflush(stdin);
        another = getch();
        system("cls");
        fflush(stdin);
    }
    fclose(fp);
    gotoxy(10,18);
    printf("Press any key to continue.");
    getch();
    menust();
}
void view()
{
    FILE *fp;
    int i=1,j;
    struct student std;
    system("cls");
    gotoxy(10,3);
    printf("<--:VIEW RECORD:-->");
    gotoxy(10,5);
    printf("S.No   Name of Student       Mobile No   Roll No  Course      Branch");
    gotoxy(10,6);
    printf("--------------------------------------------------------------------");
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,8);
        printf("Error opening file.");
        exit(1);
    }
    j=8;
    while(fread(&std,sizeof(std),1,fp) == 1){
        gotoxy(10,j);
        printf("%-7d%-22s%-12s%-9d%-12s%-12s",i,std.name,std.mobile,std.rollno,std.course,std.branch);
        i++;
        j++;
    }
    fclose(fp);
    gotoxy(10,j+3);
    printf("Press any key to continue.");
    getch();
    menust();
}
void search()
{
    FILE *fp;
    struct student std;
    char stname[20];
    system("cls");
    gotoxy(10,3);
    printf("<--:SEARCH RECORD:-->");
    gotoxy(10,5);
    printf("Enter name of student : ");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    while(fread(&std,sizeof(std),1,fp ) == 1){
        if(strcmp(stname,std.name) == 0){
            gotoxy(10,8);
            printf("Name : %s",std.name);
            gotoxy(10,9);
            printf("Mobile Number : %s",std.mobile);
            gotoxy(10,10);
            printf("Roll No : %d",std.rollno);
            gotoxy(10,11);
            printf("Course : %s",std.course);
            gotoxy(10,12);
            printf("Branch : %s",std.branch);
        }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue.");
    getch();
    menust();
}
void modify()
{
    char stname[20];
    FILE *fp;
    struct student std;
    system("cls");
    gotoxy(10,3);
    printf("<--:MODIFY RECORD:-->");
    gotoxy(10,5);
    printf("Enter name of student to modify: ");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    rewind(fp);
    fflush(stdin);
    while(fread(&std,sizeof(std),1,fp) == 1)
    {
        if(strcmp(stname,std.name) == 0){
            gotoxy(10,7);
            printf("Enter name: ");
            gets(std.name);
            gotoxy(10,8);
            printf("Enter mobile number : ");
            gets(std.mobile);
            gotoxy(10,9);
            printf("Enter roll no : ");
            scanf("%d",&std.rollno);
            gotoxy(10,10);
            printf("Enter Course : ");
            fflush(stdin);
            gets(std.course);
            gotoxy(10,11);
            printf("Enter Branch : ");
            fflush(stdin);
            gets(std.branch);
            fseek(fp ,-sizeof(std),SEEK_CUR);
            fwrite(&std,sizeof(std),1,fp);
            break;
        }
        else
        {
            printf("No Record found");
        }
    }
    fclose(fp);
    gotoxy(10,16);
    printf("Press any key to continue.");
    getch();
    menust();
}
void deleterec()
{
    char stname[20];
    FILE *fp,*ft;
    struct student std;
    system("cls");
    gotoxy(10,3);
    printf("<--:DELETE RECORD:-->");
    gotoxy(10,5);
    printf("Enter name of student to delete record : ");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt","rb+");
    if(fp == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    ft = fopen("temp.txt","wb+");
    if(ft == NULL){
        gotoxy(10,6);
        printf("Error opening file");
        exit(1);
    }
    while(fread(&std,sizeof(std),1,fp) == 1){
        if(strcmp(stname,std.name)!=0)
            fwrite(&std,sizeof(std),1,ft);
    }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(10,10);
    printf("Press any key to continue.");
    getch();
    menust();
}
void menu(){
system("CLS");
int choice;
system("color 07");
printf("\n\n\t\t\t\tHOSTEL MANAGEMENT SYSTEM");
printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Enter new Student[1] \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Update student information[2] \xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Check student details [3]     \xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Remove existing Student[4]    \xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  View all students list[5]  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
printf("\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\n \t\t Today is: ");
    tm();//time call
    printf("\n\t\t Please Enter Your Choice(6 to exit): ");
scanf("%d",&choice);
switch(choice)
{
case 1:
    system("cls");
    system("color 0a");
    new_entry();
break;
case 2:
    system("cls");
    system("color 0f");
    edit();
break;
case 3:see();
break;
case 4:erase();
break;
case 5:view_list();
break;
case 6:Menu();
break;
default:
printf("Wrong Choice! \a");
delay(100);
menu();
}
}
int delay(unsigned int mseconds)
{
clock_t goal=mseconds+clock();
while(goal>clock());
}
int tm ()
{
		time_t mytime;
		mytime = time(NULL);
		printf(ctime(&mytime));
	return 0;
}

void new_entry()
{
system("CLS");
int choice;
FILE *ptr,*hostel;
ptr=fopen("Record.dat","a+");
hostel_id:
printf("\t\t\t\xB2\xB2\xB2 ADD STUDENTS DATA  \xB2\xB2\xB2\xB2");
printf("\nEnter your hostel_id:");
scanf("%s",check.hostel_id);
while(fscanf(ptr,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone_no, add.mail_id, add.father_name, &add.father_phone_no, add.room_no, add.hostel_name, &add.rent_paid)!=EOF)
{
if (strcmp(check.hostel_id,add.hostel_id)==0)
{printf("Students hostel_id already in use!");
goto hostel_id;
}
}
strcpy(add.hostel_id,check.hostel_id);
printf("\nEnter the name:");
scanf("%s",add.name);
printf("\nEnter the date of birth(mm/dd/yyyy):");
scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
printf("\nEnter the age:");
scanf("%d",&add.age);
printf("\nEnter the city:");
scanf("%s",add.city);
printf("\nEnter the phone number:");
scanf("%s",&add.phone_no);
printf("\n Enter your email id :");
scanf("%s",add.mail_id);
printf("\n Enter your Father's name:");
scanf("%s",add.father_name);
printf("\n Enter your Father's phone no.:");
scanf("%s",&add.father_phone_no);
printf("\n --------------------------Each Hostel has 10 rooms------------------------!!!!");
printf("\n Enter your room no.:");
scanf("%s",add.room_no);
printf("\n Enter your hostel name from BH-1, BH-2, BH-3, GH-1 :");
scanf("%s",add.hostel_name);
printf("\n Total rent is:5000");
printf("\n Amount of rent paid: ");
scanf("%d" , &add.rent_paid);
fprintf(ptr,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone_no, add.mail_id, add.father_name, add.father_phone_no, add.room_no, add.hostel_name, add.rent_paid);
if(strcmp(add.hostel_name,"BH-1")==0){
hostel=fopen("BH-1.dat","a[11]");
fprintf(hostel, "%s\n", add.hostel_id);
fclose(hostel);
}
else if(strcmp(add.hostel_name,"BH-2")==0){
hostel=fopen("BH-2.dat","[11]");
fprintf(hostel, "%s\n", add.hostel_id);
fclose(hostel);
}
else if(strcmp(add.hostel_name,"BH-3")==0){
hostel=fopen("BH-3.dat","a[11]");
fprintf(hostel, "%s\n", add.hostel_id);
fclose(hostel);
}
else if(strcmp(add.hostel_name,"GH-1")==0){
hostel=fopen("GH-1.dat","[11]");
fprintf(hostel, "%s\n",add.hostel_id);
fclose(hostel);
}
fclose(ptr);
printf("\nStudent added successfully!");
add_invalid:
printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
scanf("%d",&main_exit);
if (main_exit==1)
menu();
else if(main_exit==0)
closer();
else{
printf("\nInvalid!\a");
goto add_invalid;
}
}
void view_list()
{
system("CLS");
FILE *view;
view=fopen("Record.dat","r");
int test=0;
printf("\nHOSTEL_ID\tNAME\t\t\tCity\t\t\tRENT PAID\t\t\tROOM ALLOTED\n");
while(fscanf(view,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone_no, add.mail_id, add.father_name, &add.father_phone_no, add.room_no, add.hostel_name, &add.rent_paid)!=EOF)
{
printf("\n%8s\t %10s\t\t\t %10s\t\t %d\t\t\t %s",add.hostel_id,add.name,add.city,add.rent_paid,add.room_no);
test++;
}
fclose(view);
if (test==0){
printf("\nNO RECORDS!!\n");}
view_list_invalid:
printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
scanf("%d",&main_exit);
if (main_exit==1)
menu();
else if(main_exit==0)
closer();
else{
printf("\nInvalid!\a");
goto view_list_invalid;
}
}
void see()
{
system("CLS");
FILE *ptr;
int test=0;
int choice;
ptr=fopen("Record.dat","r");
printf("Do you want to check by\n1.Hostel id.\nEnter your choice:");
scanf("%d",&choice);
if (choice==1)
{   printf("\n\nEnter the hostel id:");
scanf("%s",check.hostel_id);
while (fscanf(ptr,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone_no, add.mail_id, add.father_name, &add.father_phone_no, add.room_no, add.hostel_name, &add.rent_paid)!=EOF)
{
if(strcmp(add.hostel_id,check.hostel_id)==0)
{
test=1;
printf("\nhostel_id:%s\nName:%s \nDOB:%d/%d/%d \nAge:%d \ncity:%s \nPhone number:%s \nE-Mail id:%s \nFather's name:%s \n Father's Phone No.:%s \nRoom No:%s \nHostel:%s \nAdd.rent_paid :%d\n",add.hostel_id, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone_no, add.mail_id, add.father_name, add.father_phone_no, add.room_no, add.hostel_name, add.rent_paid);
}
}
}
fclose(ptr);
if(test!=1)
printf("\nRecord not found!!\a\a\a");
see_invalid:
printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
scanf("%d",&main_exit);
if (main_exit==1)
menu();
else if (main_exit==2)
closer();
else if(main_exit==0)
erase();
else{
printf("\nInvalid!\a");
goto see_invalid;
}
}
void edit()
{
system("CLS");
int choice,test=0;
FILE *old,*newrec;
old=fopen("Record.dat","r");
newrec=fopen("new.dat","w");
printf("\nEnter the hostel id of the student whose info you want to change:");
scanf("%s",upd.hostel_id);
while(fscanf(old,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone_no, add.mail_id, add.father_name, &add.father_phone_no, add.room_no, add.hostel_name, &add.rent_paid)!=EOF)
{
if (strcmp(add.hostel_id,upd.hostel_id)==0)
{   test=1;
printf("\nWhich information do you want to change?\n1.Room no.\n2.Phone\n\nEnter your choice(1 for room no. and 2 for phone ):");
scanf("%d",&choice);
if(choice==1)
{printf("Enter the new room no.:");
scanf("%s",upd.room_no);
fprintf(newrec,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone_no, add.mail_id, add.father_name, add.father_phone_no, upd.room_no, add.hostel_name, add.rent_paid);
printf("Changes saved!");
}else if(choice==2)
{
printf("Enter the new phone number:");
scanf("%d",&upd.phone_no);
fprintf(newrec,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, upd.phone_no, add.mail_id, add.father_name, add.father_phone_no, add.room_no, add.hostel_name, add.rent_paid);
printf("Changes saved!");
}
}else
fprintf(newrec,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone_no, add.mail_id, add.father_name, add.father_phone_no, add.room_no, add.hostel_name, add.rent_paid);
}
fclose(old);
fclose(newrec);
remove("Record.dat");
rename("new.dat","record.dat");
if(test!=1)
printf("\nRecord not found!!\a\a\a");
edit_invalid:
printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
scanf("%d",&main_exit);
if (main_exit==1)
menu();
else if (main_exit==2)
closer();
else if(main_exit==0)
edit();
else{
printf("\nInvalid!\a");
goto edit_invalid;
}
}
void erase(){
system("CLS");
FILE *old,*newrec;
int test=0;
old=fopen("Record.dat","r");
newrec=fopen("new.dat","w");
printf("Enter the Hostel_id of student whose data you want to delete:");
scanf("%s",rem.hostel_id);
while (fscanf(old,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone_no, add.mail_id, add.father_name, &add.father_phone_no, add.room_no, add.hostel_name, &add.rent_paid)!=EOF)
{
if(strcmp(add.hostel_id,rem.hostel_id)!=0)
fprintf(newrec,"%s %s %d/%d/%d %d %s %s %s %s %s %s %s %d\n",add.hostel_id, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone_no, add.mail_id, add.father_name, add.father_phone_no, add.room_no, add.hostel_name, add.rent_paid);
else{test++;
printf("\nRecord deleted successfully!\n");
}
}
fclose(old);
fclose(newrec);
remove("Record.dat");
rename("new.dat","record.dat");
if(test==0)
printf("\nRecord not found!!\a\a\a");
erase_invalid:
printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
scanf("%d",&main_exit);
if (main_exit==1)
menu();
else if (main_exit==2)
closer();
else if(main_exit==0)
erase();
else{
printf("\nInvalid!\a");
goto erase_invalid;
}
}
void closer()
{
system("CLS");
printf("\n\n\n*THANK YOU FOR USING THE SYSTEM*\n\n");
}
int pass(void)
{
int a=0,i=0;
char uname[10],c=' ';
char pword[10],code[10];
char user[10]="user";
char pass[10]="pass";
system("cls");
system("color e0");
int i1,j,l,l1;
char name[50]="\n\n\n\n\t\t\t  WELCOME TO OUR PROJECT\n\n";
printf("\t\n");
for(i1=0;i1<50;i1++){
printf("%c",name[i1]);
delay(20);
}
printf("\n\t   ");
for(j=0;j<59;j++){
printf("%c",2);
delay(30);
}
printf("\n\n\n\n");
system("cls");
system("color 0f");
printf("\n\n\n");
printf("\t\tName Of The Group is.........\n\n\n");
printf("\n\n\t");
for(j=0;j<6;j++){
printf("-");
delay(50);
}
printf(" SDF F7(64687383) ");
for(j=0;j<6;j++){
printf("-");
delay(50);
}
delay(1000);
printf("\n\n");
system("CLS");
system("color 1f");
printf("\n\n\n");
printf("\tName Of The Group Members Of \n\t\t");
char ame[10]="\t SDF :\n\n";
printf("\t\n");
for(l1=0;l1<10;l1++){
printf("%c",ame[l1]);
delay(150);
}
printf(" \n\t * ID:  - Shaurya Goyal 64\n\n");
printf(" \t * ID:  - Shreshtha Singhal 73\n\n");
printf(" \t * ID:  - Harshvardhan Singh 68\n\n");
printf(" \t * ID:  - Sarthak Agarwal 83\n\n");
printf("\n");
system("pause");
system("CLS");
system("color 5e");
printf("\n\n\n\n\n\n");
printf("\t\t\tOur project on:\n\n");
printf("\n");
char nam[]="\n\n\t\t\tCollege Management System Project \n\n";
printf("\t\n");
for(l=0;l<40;l++){
printf("%c",nam[l]);
delay(40);
}
printf("\n\n\n");
delay(600);
do{
    system("cls");
    printf("\n  *  LOGIN FORM  *  ");
    printf(" \n                       ENTER USERNAME:-");
    scanf("%s", &uname);
    printf(" \n                       ENTER PASSWORD:-");
    while(i<10){
    pword[i]=getch();
    c=pword[i];
    if(c==13) break;
    else printf("*");
    i++;
    }
    pword[i]='\0';
    i=0;
    if(strcmp(uname,user)==0 && strcmp(pword,pass)==0){
    printf("  \n\n\n       WELCOME !!!! LOGIN IS SUCCESSFUL\n");
    system("cls");
    system("color 1a");
    printf("\n\n\n\n\n\n");
    printf("                                                           \n");
    printf("                                                           \n");
    printf("                      \t  Please Wait...\n\n\n\n\n");
    printf("                     _____ ______               \n");
    printf("                    /                             \\          \n");
    printf("                   |     Loading.............      |           \n");
    printf("\t\t   |\t");
    for(j=0;j<24;j++){
    printf("%c",219);
    delay(50);
    }
    printf("   |\n                    \\_____ _____/           \n");
    printf("                                                           \n");
    printf("\n\n\n");
    delay(1000);
    break;
    }else{
    printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
    system("PAUSE");
    a++;
    getch();
    }
    }
    while(a<=2);
    if (a>2)
    {
    printf("\nSorry you have entered the wrong user name and password for four times!!!");
    getch();
    }
    system("cls");
    }
void gotoxy(int x,int y)
{
        COORD c;
        c.X=x;
        c.Y=y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void library(){
system("color 02");
    int ch;

    while(1){
        system("cls");
        printf("\t\t\t\t\t<== Library Management System ==>\n");
        printf("\n\t\t\t\t\t1.Add Book\n");
        printf("\n\t\t\t\t\t2.Books List\n");
        printf("\n\t\t\t\t\t3.Remove Book\n");
        printf("\n\t\t\t\t\t4.Issue Book\n");
        printf("\n\t\t\t\t\t5.Issued Book List\n");
        printf("\n\t\t\t\t\t0.Exit\n\n");
        printf("\n\n\t\t\t\t\tEnter your choice: ");
        scanf("%d", &ch);

        switch(ch){
        case 0:
            exit(0);

        case 1:
            addBook();
            break;

        case 2:
            booksList();
            break;

        case 3:
            del();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            issueList();
            break;

        default:
            printf("\t\t\t\t\tInvalid Choice...\n\n");

        }
        printf("\t\t\t\t\tPress Any Key To Continue...");
        getch();
    }

    return 0;
}


void addBook(){
    FILE *fp;
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(b.date, myDate);

    fp = fopen("books.txt", "ab");

    printf("\t\t\t\t\tEnter book id: ");
    scanf("%d", &b.id);

    printf("\t\t\t\t\tEnter book name: ");
    fflush(stdin);
    gets(b.bookName);

    printf("\t\t\t\t\tEnter author name: ");
    fflush(stdin);
    gets(b.authorName);

    printf("\t\t\t\t\tBook Added Successfully");

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
}


void booksList(){
    FILE *fp;
    system("cls");
    printf("<== Available Books ==>\n\n");
    printf("%-10s %-30s %-20s %s\n\n", "Book id", "Book Name", "Author", "Date");

    fp = fopen("books.txt", "rb");
    while(fread(&b, sizeof(b), 1, fp) == 1){
        printf("%-10d %-30s %-20s %s\n", b.id, b.bookName, b.authorName, b.date);
    }

    fclose(fp);
}

void del(){
    int id, f=0;
    system("cls");
    printf("<== Remove Books ==>\n\n");
    printf("Enter Book id to remove: ");
    scanf("%d", &id);
    FILE *fp;
    FILE *ft;

    fp = fopen("books.txt", "rb");
    ft = fopen("temp.txt", "wb");

    while(fread(&b, sizeof(b), 1, fp) == 1){
        if(id == b.id){
            f=1;
        }else{
            fwrite(&b, sizeof(b), 1, ft);
        }
    }

    if(f==1){
        printf("\n\nDeleted Successfully.");
    }else{
        printf("\n\nRecord Not Found !");
    }

    fclose(fp);
    fclose(ft);

    remove("books.txt");
    rename("temp.txt", "books.txt");

}


void issueBook(){
    FILE *fp;
    char myDate[12];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(myDate, "%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
    strcpy(s.date, myDate);

    int f=0;

    system("cls");
    printf("<== Issue Books ==>\n\n");

    printf("Enter Book id to issue: ");
    scanf("%d", &s.id);

    //Check if we have book of given id
    fp = fopen("books.txt", "rb");

    while(fread(&b, sizeof(b), 1, fp) == 1){
        if(b.id == s.id){
            strcpy(s.bookName, b.bookName);
            f=1;
            break;
        }
    }

    if(f==0){
        printf("No book found with this id\n");
        printf("Please try again...\n\n");
        return;
    }

    fp = fopen("issue.txt", "ab");

    printf("Enter Student Name: ");
    fflush(stdin);
    gets(s.sName);

    printf("Enter Student Class: ");
    fflush(stdin);
    gets(s.sClass);

    printf("Enter Student Roll: ");
    scanf("%d", &s.sRoll);

    printf("Book Issued Successfully\n\n");

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}

void issueList(){

    system("cls");
    FILE *fp;
    printf("<== Book Issue List ==>\n\n");

    printf("%-10s %-30s %-20s %-10s %-30s %s\n\n", "S.id", "Name", "Class", "Roll", "Book Name", "Date");

    fp = fopen("issue.txt", "rb");
    while(fread(&s, sizeof(s), 1, fp) == 1){
        printf("%-10d %-30s %-20s %-10d %-30s %s\n", s.id, s.sName, s.sClass, s.sRoll, s.bookName, s.date);
    }

    fclose(fp);
}
