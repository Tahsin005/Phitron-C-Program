#include<stdio.h>
#include<string.h>
int main(){
    char a[200],b[100];
    scanf("%s %s",a,b);
    int x=strlen(a);
    int y=strlen(b);
    printf("%d %d\n",x,y);
    for(int i=0;i<=y;i++){
        a[x]=b[i];
        x++;
    }
    // strcat(a,b);
    printf("%s %s",a,b);
    return 0;
}