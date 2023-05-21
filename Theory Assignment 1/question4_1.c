#include<stdio.h>

int add(int x,int y){
    int sum=x+y;
    return sum;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=add(a,b);
    printf("Sum of %d and %d is - %d\n",a,b,result);
    return 0;
}