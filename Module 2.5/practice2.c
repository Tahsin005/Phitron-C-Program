#include<stdio.h>

int main(){
    int a,b,sum,sub,mul;
    float div;
    printf("Enter two integer values: ");
    scanf("%d %d", &a, &b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b;
    printf(" %d \n %d \n %d \n %.2f", sum,sub,mul,div);
    return 0;
}