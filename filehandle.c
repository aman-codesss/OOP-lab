#include<stdio.h>
#include<conio.h>
struct students
{
   char name[20];
   int roll,phone_number;
   char address[50];

}s;


int main(){
 struct students s[100];
 int n,roll,phoneNumber;
 char name[20], address[50];

 printf("Number of students: ");
 scanf("%d",&n);
 FILE *f = fopen("Records.txt","w");

 //storing the details in file
 for(int i=0;i<n;i++){
    printf("Enter student's name, roll, phone-number and address:\n ");
    scanf("%s%d%d%s",s[i].name,&s[i].roll,&s[i].phone_number,s[i].address);
    fprintf(f,"%s %d %d %s\n",s[i].name,s[i].roll,s[i].phone_number,s[i].address);
    printf("\n");
 }
 fclose(f);
 //Reading the data from file
FILE *fp = fopen("Records.txt","r");

printf("Student's name and marks in c: \n");
    while(fscanf(f,"%s%d%d%s",name,&roll,&phoneNumber,address)!=EOF){
        printf("Name: %s ",name);
        printf("Roll: %d ",roll);
        printf("PhoneNumber: %d ",phoneNumber);
        printf("Address: %s\n\n",address);
        
    }
    printf("----Successfully retrieved data----");

fclose(fp); 

}