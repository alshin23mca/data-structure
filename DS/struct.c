#include<stdio.h>
void main()
{
 struct student 
 {
  int rollno;
  float marks;
 }s1;

s1.rollno=201;
s1.marks=85.9;
printf("Student Rollno=%d\n",s1.rollno);
printf("Student Marks=%f\n",s1.marks);
return 0; }
