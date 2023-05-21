#include<stdio.h>
/*Write a C program to read the age of a candidate and determine whether 
he is eligible to cast his/her own vote. */
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if(age>=18) printf("You can cast your vote");
    else printf("You cannot cast your vote");
    return 0;
}