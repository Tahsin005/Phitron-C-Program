#include<stdio.h>
#include<string.h>

int main(){
    // char a[5]={'h','e','l','l','o'};
    char a[6]="hello";
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n", sz);
    // for(int i=0;i<5;i++){
    //     printf("%c\n", a[i]);
    // }
    printf("%s", a);
    return 0;
}