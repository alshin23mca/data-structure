#include<stdio.h>

 struct student 
 {
  int rollno;
  float marks[3];
  char nm[20]
 } s1;
void main()
{
 int i; 
 for(i=0;i<=3;i++)
 {
 printf("Enter roll no: ");
 scanf("%d",&s[i].rollno);
 printf("Enter name: ");
 scanf("%s",s[i].nm);
 printf("Enter mark: ");
 scanf("%f",&s[i].marks);
 }

 for(i=0;i<=3;i++)
 {
  printf("\nStudent Rollno=%d\n",s[i].rollno);
  printf("Student Name=%s\n",s[i].nm);
  printf("Student Marks=%0.2f\n",s[i].marks);
 }
}
