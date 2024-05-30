#include<stdio.h>
#include<conio.h>
struct students
{
   char name[20];
   float marks;
}s;


int main(){
 struct students s[100];
 int n;
 printf("Number of students: ");
 scanf("%d",&n);
 //storing the name and marks
 for(int i=0;i<n;i++){
    printf("Enter student's name and marks in c: ");
    scanf("%s%f",s[i].name,&s[i].marks);
    printf("\n");
 }
 //retrieving the data
 for(int i=0;i<n;i++){
    printf("Student's name and marks in c: \n");
    printf("%s %f",s[i].name,s[i].marks);
    printf("\n");
 }

}