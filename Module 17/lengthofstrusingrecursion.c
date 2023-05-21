#include<stdio.h>
#include<string.h>
int fun(char a[],int i){
    if(a[i]=='\0') return 0;
    int l=fun(a,i+1);
    return l+1;
}
int main(){
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int length=fun(s,0);
    printf("%d",length);
    return 0;
}