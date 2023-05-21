#include<stdio.h>
char capital_to_small(char a){
    return a+32;
}
int main(){
    char ch;
    scanf("%c",&ch);
    printf("%c",capital_to_small(ch));
    return 0;
}