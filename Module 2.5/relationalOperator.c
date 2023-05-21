#include<stdio.h>

int main(){
    int a=10,b=20;
    int sum,sub,mul,mod;
    float div;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b;
    mod=a%b;
    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%f\n", div);
    printf("%d\n", mod);
    return 0;
}