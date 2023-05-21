#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=0){
        printf("%d",n);
    }
    if(n<0){
        printf("%d",n*(-1));
    }
    return 0;
}