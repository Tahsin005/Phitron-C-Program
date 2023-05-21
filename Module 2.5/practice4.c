#include<stdio.h>

int main(){
    int num;
    printf("Enter an integer value : ");
    scanf("%d", &num);
    if(num>0) printf("Positve");
    else if(num<0) printf("Negative");
    else printf("Zero");
    return 0;
}