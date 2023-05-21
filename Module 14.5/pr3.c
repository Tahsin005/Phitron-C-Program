#include<stdio.h>
int char_to_ascii(char a){
    return (int)a;
}
int main(){
    char ch;
    scanf("%c",&ch);
    printf("%d",char_to_ascii(ch));
    return 0;
}