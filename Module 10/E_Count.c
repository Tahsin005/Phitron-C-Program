#include<stdio.h>
#include<string.h>

int main(){
    char a[1000001];
    scanf("%s",a);
    int sum=0;
    int i=0;
    while(a[i]!='\0'){
        sum=sum+(a[i]-48);
        i++;
    }
    printf("%d",sum);
    return 0;
}