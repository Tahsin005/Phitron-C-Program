#include<stdio.h>
#include<string.h>

int main(){
    char a[18];
    // gets(a);
    // printf("%s", a);
    fgets(a,19,stdin);// fgets takes "enter" as an input
    a[9]='\0';// [x] x is the index
    printf("%s", a);
    return 0;
}