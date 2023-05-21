#include<stdio.h>

int main(){
    int per,op;
    scanf("%d %d",&per,&op);
    per=100-per;
    float percentage=(float)per/100;
    printf("%.2f",(float)op/percentage);
    return 0;
}