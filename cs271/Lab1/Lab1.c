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
   int sentinel = 0;
   
   // create input loop
   while (sentinel = 0){
      printf("Enter the first score: \n");
      scanf("%f", &score1);
      printf("\nEnter the second score: \n");
      scanf("%f", &score2);
      printf("\nEnter the third score: \n");
      scanf("%f", &score3);
      printf("\nEnter the fourth score: \n");
      scanf("%f", &score4);
      studentAverage = (score1 + score2 + score3 + score4)/4;
      
      // setup sentinel escape values
      if (score1==-1 && score2==0 && score3==0 && score4==0){
          break;}
          
      // print scores    
      printf("Exam Scores: %3.0f%3.0f%3.0f%3.0f\n", score1, score2, score3, score4); 
      
      // print average
      printf("The average is: %.2f\n", studentAverage);
      if (studentAverage >= 90){
         printf("Letter Grade: A\n");}
      else if (studentAverage >= 80){
         printf("Letter Grade: B\n ");}
      else if (studentAverage >= 70){
         printf("Letter Grade: C\n");}
      else if (studentAverage >= 60){
         printf("Letter Grade: D\n");}
      else{
         printf("Letter Grade: F\n");}}
} // end main function
