/*
5)	If the marks obtained by a student in five different subjects is input 
    through the keyboard, find out aggregate marks and percentage 
    marks obtained by the student. 
    Assume that the maximum marks that can be obtained by a 
    student in each subject is 100.
*/
#include<stdio.h>
#define datta main

int datta(void) {
    int s1,s2,s3,s4,s5,t;
    float per;
    printf("Enter marks (out of 100) of 5 Subjects --> \n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    t = s1+s2+s3+s4+s5;
    per = (float)t/5;

    printf("Aggregate Marks obtained are %d \nWith persentage of %.2f",t,per);

}