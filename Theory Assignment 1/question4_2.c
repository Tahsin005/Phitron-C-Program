#include<stdio.h>
int multiplication(){
    int a,b;
    scanf("%d %d",&a,&b);
    int mul=a+b;
    return mul;
}
int main(){
    int result=multiplication();
    printf("%d",result);
    return 0;
}