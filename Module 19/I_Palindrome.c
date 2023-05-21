#include<stdio.h>
#include<string.h>
int main(){
    char a[1001],b[1001];
    scanf("%s",a);
    strcpy(b,a);
    for(int i=0,j=strlen(b)-1;i<j;i++,j--){
        char temp=b[i];
        b[i]=b[j];
        b[j]=temp;
    }
    if(strcmp(a,b)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}