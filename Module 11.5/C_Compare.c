#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int x=strcmp(a,b);
    if(x<0){
        printf("%s",a);
    }
    else if(x>0){
        printf("%s",b);
    }
    else{
        printf("%s",a);
    }
    return 0;
}