#include<stdio.h>

 struct student 
 {
  int rollno;
  float marks;
  char nm[20]
 } s1;
void main()
{
printf("Enter roll no: ");
scanf("%d",&s1.rollno);
printf("Enter name: ");
scanf("%s",s1.nm);
printf("Enter mark: ");
scanf("%f",&s1.marks);


printf("\nStudent Rollno=%d\n",s1.rollno);
printf("Student Name=%s\n",s1.nm);
printf("Student Marks=%0.2f\n",s1.marks);

}
