#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char a[101];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s",a);
        int x=strlen(a);
        if(x>10){
            printf("%c%d%c\n",a[0],(x-2),a[x-1]);
        }
        else if(x<=10){
            printf("%s\n",a);
        }
    }
    return 0;
}