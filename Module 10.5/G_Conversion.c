#include<stdio.h>
#include<string.h>
int main(){
    char a[100001];
    fgets(a,100001,stdin);
    int x=strlen(a);
    for(int i=0;i<x;i++){
        if(a[i]==','){
            a[i]=' ';
        }
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
    return 0;
}