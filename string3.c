#include <stdio.h>

struct Student{

   char name[50];
   int rollno;
   float marks1;
   float marks3;
   float marks2;

};

int main(){


 struct Student students[3];
 float average[3];
 int highestindex=0;
 float highestaverage=-1;

 for(int i=0;i<3;i++){
     printf("---Enter details for student %d---",i+1);
     printf("\nName: ");
     scanf(" %[^\n]", &students[i].name);
     printf("\nRoll no.");
     scanf("%d", &students[i].rollno);
     printf("\nMarks1: ");
     scanf("%f",&students[i].marks1);
     printf("\nMarks2: ");
     scanf("%f",&students[i].marks2);
     printf("\nMarks3: ");
     scanf("%f",&students[i].marks3);
     average[i] = (students[i].marks1 + students[i].marks2 + students[i].marks3)/3;
     if(average[i]>highestaverage){
        highestindex = i;
        highestaverage = average[highestindex];
     }
 }
printf("The student will highest average is: \n");
printf("Name: %s",students[highestindex].name);
printf("\nRoll no.%d", students[highestindex].rollno);
printf("\nAverage: %.2f",highestaverage);

return 0;

}