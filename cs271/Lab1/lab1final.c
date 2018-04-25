// CS 271
// Program Name: lab1.c
// Autho/: Evan Lavelle
// Date:/08/21/17
// Purpose:To average scores and display student grades


#include <stdio.h>
#include <math.h>

int main (void) {
   float score1, score2, score3, score4;
   float studentAverage;
   int sentinel=0;
   
   while (sentinel==0){
      // input the four scores
      printf("Enter the first score: \n");
      scanf("%f", &score1);
      printf("\nEnter the second score: \n");
      scanf("%f", &score2);
      printf("\nEnter the third score: \n");
      scanf("%f", &score3);
      printf("\nEnter the fourth score: \n");
      scanf("%f", &score4);
      studentAverage = (score1 + score2 + score3 + score4)/4;
      if (score1==-1 && score2== 0 && score3== 0 & score4== 0){
          sentinel=1;}
      // displays the average of the four scores
      printf("The average is: %.2f\n", studentAverage);
      if (studentAverage >= 90){
         printf("A\n");}
      else if (studentAverage >= 80){
         printf("B\n ");}
      else if (studentAverage >= 70){
         printf("C\n");}
      else if (studentAverage >= 60){
         printf("D\n");}
      else{
         printf(" D\n");}}
} // end main function
