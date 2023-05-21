#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    fgets(s,1001,stdin);
    int x=strlen(s);
    int count_cap=0;
    int count_small=0;
    int count_space=0;
    for(int i=0;i<x;i++){
        if(s[i]>='A' && s[i]<='Z'){
            count_cap++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            count_small++;
        }
        else if(s[i]==32){
            count_space++;
        }
    }
    printf("Capital - %d\n",count_cap);
    printf("Small - %d\n",count_small);
    printf("Spaces - %d\n",count_space);
    
    return 0;
}