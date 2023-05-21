#include<stdio.h>
#include<string.h>

int main(){
    char a[1000],b[1000];
    scanf("%s %s",a,b);
    printf("%d %d\n", strlen(a),strlen(b));

    printf("%s %s",a,b);
    return 0;
}