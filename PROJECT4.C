  #nclude<stdio.h>
#include<stdlib.h>

struct student
{
char name[50];
int roll_no;
int marks;
char city[20];
char dream[20];
};

void readstudent(struct student s[],int n)
{
int  i;

for(i=0;i<n;i++)
{
printf("Enter the student's  name:");
scanf("%s",s[i].name);
printf("Enter the student's  roll no:");
scanf("%d",&s[i].roll_no);
printf("Enter the student's  marks:");
scanf("%d",&s[i].marks);
printf("Enter the student's  city:");
scanf("%s",s[i].city);
printf("Enter the student's  dream:");
scanf("%s",s[i].dream);
}
}


void writestudent(struct student s[],int n)
 {
int i;
printf("\n===========STUDENT DETAILS=============\n");

for(i=0;i<n;i++)
{
printf("name","%s\n",s[i].name);
printf("roll","%d\n",s[i].roll_no);
printf("marks","%d\n",s[i].marks);
printf("city","%s\n",s[i].city);
printf("dream","%s\n",s[i].dream);
}
printf("\n");
}

void main()
{

int n;
struct student s[100];

clrscr();

printf("Enter the number of student");
scanf("%d",&n);

readstudent(s,n);
writestudent(s,n);
return 0;
}

