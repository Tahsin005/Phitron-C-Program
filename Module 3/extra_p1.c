#include<stdio.h>
/*Write a program in C to read 10 numbers from 
the keyboard and find their sum and average. */
int main(){
      int i,num,sum=0;
      float avg; 
      printf("Enter a number : ")  ;
      scanf("%d", &num);
      for(i=1;i<=num;i++){
        sum+=i;
      }
      printf("The sum of 1st %d natural numbers is %d\n", i-1, sum);
      avg=(float)sum/num;
      printf("Average is %f", avg);
    return 0;
}