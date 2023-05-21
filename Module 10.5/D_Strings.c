#include<stdio.h>
#include<string.h>

int main(){
    char atr[11];
    scanf("%s",atr);
    char btr[11];
    scanf("%s",btr);

    int x=strlen(atr);
    int y=strlen(btr);

    printf("%d %d\n",x,y);
    printf("%s%s\n",atr,btr);

    int temp=atr[0];
    atr[0]=btr[0];
    btr[0]=temp;

    printf("%s %s",atr,btr);
    return 0;
}