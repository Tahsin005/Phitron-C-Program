#include<stdio.h>

int main(){
    char a[100];
    // scanf("%s", a);
    fgets(a,100,stdin);
    printf("%s\n",a);
    return 0;
}