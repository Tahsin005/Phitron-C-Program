#include<stdio.h>
char small_to_capital(char a){
    return a-32;
}
int main(){
    char ch;
    scanf("%c",&ch);
    printf("%c",small_to_capital(ch));
    return 0;
}